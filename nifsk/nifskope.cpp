#include "nifskope.h"
#include <headers.h>
const struct aiScene* scene = NULL;

void Ui_MainWindow::setValue(QString value)
{
    if (value != m_value) {
        m_value = value;
        emit valueChanged(value);
    }
}

 void Ui_MainWindow::importscene(void)
{

	QString fileName = QFileDialog::getOpenFileName(this,
	QObject::tr("Open File"), "/home/jana", QObject::tr("Image Files (*.png *.jpg *.bmp)"));
	const char* filename;
	scene = aiImportFile(filename,aiProcessPreset_TargetRealtime_MaxQuality);

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

