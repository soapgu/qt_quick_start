#include <QtGlobal>

#if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
#error "qt_quick_start requires Qt 5.12 or later"
#endif

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
#error "qt_quick_start requires Qt 5 and does not support Qt 6"
#endif

#include <QApplication>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    QWidget window;
    window.setWindowTitle("Qt Quick Start");
    window.setMinimumSize(320, 180);

    QLabel *label = new QLabel("Hello World");
    label->setAlignment(Qt::AlignCenter);

    QVBoxLayout *layout = new QVBoxLayout(&window);
    layout->addWidget(label, 0, Qt::AlignCenter);

    window.show();
    return application.exec();
}
