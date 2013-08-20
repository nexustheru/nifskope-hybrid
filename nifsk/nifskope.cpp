#include "nifskope.h"
#include <headers.h>

void Ui_MainWindow::setValue(QString value)
{
    if (value != m_value) {
        m_value = value;
        emit valueChanged(value);
    }
}

int HK_CALL main( int argc,char* argv[])
{
	hkMemoryRouter* memoryRouter = hkMemoryInitUtil::initDefault( hkMallocAllocator::m_defaultMallocAllocator, hkMemorySystem::FrameInfo(1024 * 1024) );
	hkBaseSystem::init( memoryRouter, errorReport );
	QApplication app(argc, argv);
	QMainWindow *widget = new QMainWindow;
	Ui::MainWindow ui;
	ui.setupUi(widget);
	widget->show();
	return app.exec();
};

