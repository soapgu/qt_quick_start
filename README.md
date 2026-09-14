# Qt 5.12 跨平台开发环境搭建计划

> 执行完一个项目后，将对应的 `- [ ]` 更新为 `- [x]`，并在检查项下记录实际版本、命令结果或问题说明。

## 一、本机基础环境检查

- [ ] 确认 Mac 使用 Apple Silicon `arm64`
- [ ] 确认 macOS 版本
- [ ] 确认 Xcode 和 Command Line Tools 可用
- [ ] 确认 Apple Clang 版本
- [ ] 确认 CMake 版本
- [ ] 确认 Homebrew 可用
- [ ] 确认系统中没有会干扰构建的其他 Qt 路径

## 二、安装 Qt 5.15.19

- [ ] 使用 Homebrew 安装 `qt@5`
- [ ] 确认 `qmake` 实际路径
- [ ] 确认 Qt 版本为 5.15.19
- [ ] 确认 `qmake` 和 Qt 库包含 `arm64` 架构
- [ ] 确认 Qt Widgets 模块可用
- [ ] 如果 Homebrew 方案失败，记录失败原因
- [ ] 必要时从源码编译 Qt 5.15.19 ARM64
- [ ] 记录最终采用的 Qt 安装方式和路径

本项目不使用 Qt WebEngine。

## 三、安装 Qt Creator 20.0.1

- [ ] 下载官方 macOS Universal 安装包
- [ ] 校验下载文件完整性
- [ ] 将 Qt Creator 安装到 `/Applications`
- [ ] 确认 Qt Creator 版本为 20.0.1
- [ ] 确认 Qt Creator 原生支持 Apple Silicon
- [ ] 在 `Preferences → Kits → Qt Versions` 注册 Qt 5.15
- [ ] 创建 `Desktop Qt 5.15 Apple Silicon` Kit
- [ ] 配置 Apple Clang C 编译器
- [ ] 配置 Apple Clang C++ 编译器
- [ ] 配置 LLDB 调试器
- [ ] 配置 Qt 5.15 qmake
- [ ] 确认 Kit 中没有 ABI 或工具链错误

## 四、创建最简 Hello World 项目

- [ ] 创建 `qt_quick_start.pro`
- [ ] 创建 `main.cpp`
- [ ] 将 C++ 标准固定为 C++11
- [ ] 使用 `QApplication` 创建应用程序
- [ ] 使用 `QWidget` 创建主窗口
- [ ] 使用 `QLabel` 显示 `Hello World`
- [ ] 使用 `QVBoxLayout` 居中放置文本
- [ ] 将窗口标题设置为 `Qt Quick Start`
- [ ] 添加最低 Qt 5.12 编译期检查
- [ ] 添加禁止使用 Qt 6 的编译期检查
- [ ] 确认没有使用 Qt 5.13 及以上版本新增的 API
- [ ] 确认没有使用 macOS 或麒麟专属 API
- [ ] 确认没有引入第三方依赖
- [ ] 确认没有使用 `.ui`、QML 或 Qt WebEngine

## 五、Mac 编译与运行验证

- [ ] 创建独立的 Mac 构建目录
- [ ] 使用 Qt 5.15 qmake 生成 Makefile
- [ ] 使用 Apple Clang 完成编译
- [ ] 确认编译过程无错误
- [ ] 从命令行启动程序
- [ ] 确认窗口正常显示
- [ ] 确认窗口标题为 `Qt Quick Start`
- [ ] 确认窗口中央显示 `Hello World`
- [ ] 确认程序能够正常退出
- [ ] 使用 Qt Creator 指定 Kit 重新构建
- [ ] 使用 Qt Creator 启动和调试程序
- [ ] 确认 Mac 可执行文件为 `arm64`
- [ ] 确认可执行文件链接 Qt 5.15 库
- [ ] 将 Mac 验证结果记录到 README

## 六、银河麒麟编译与运行验证

- [ ] 只向目标机传输源码、`.pro` 和 README
- [ ] 确认目标机架构为 `x86_64`
- [ ] 确认目标机系统为银河麒麟 V10 SP1 2403
- [ ] 确认目标机 Qt 版本为 5.12.12
- [ ] 确认目标机 GCC 版本为 9.3
- [ ] 确认目标机 qmake 指向 Qt 5.12.12
- [ ] 创建独立的麒麟构建目录
- [ ] 使用目标机 qmake 生成 Makefile
- [ ] 使用目标机 GCC 重新编译
- [ ] 确认源码无需修改即可编译
- [ ] 启动程序并确认窗口正常显示
- [ ] 确认窗口标题为 `Qt Quick Start`
- [ ] 确认窗口中央显示 `Hello World`
- [ ] 确认程序能够正常退出
- [ ] 使用 `file` 确认可执行文件为 Linux x86-64
- [ ] 使用 `ldd` 确认程序链接目标机 Qt 5.12 库
- [ ] 将麒麟验证结果记录到 README

## 七、最终验收

- [ ] Qt Creator 20.0.1 在 Mac 上正常运行
- [ ] Qt Creator 正确识别 Qt 5.15 Kit
- [ ] 示例项目在 Mac Qt 5.15 环境编译运行
- [ ] 相同源码在麒麟 Qt 5.12.12 环境编译运行
- [ ] 两端构建均未修改源代码
- [ ] Mac 构建产物为 macOS arm64
- [ ] 麒麟构建产物为 Linux x86-64
- [ ] 源码只使用 Qt 5.12 已有 API
- [ ] README 中记录全部实际版本、路径和验证结果
- [ ] 所有计划项目均已打勾或注明未完成原因

## 默认技术约定

- 使用 Qt Widgets。
- 使用 qmake 构建项目。
- 使用 C++11。
- Mac 使用 Qt 5.15.19。
- 麒麟使用系统现有 Qt 5.12.12 和 GCC 9.3。
- 正式跨平台交付物为源码。
- 两个平台分别原生编译，不复制或共用二进制构建产物。
- 每完成一个步骤，立即将 README 中对应的 `- [ ]` 更新为 `- [x]`。
