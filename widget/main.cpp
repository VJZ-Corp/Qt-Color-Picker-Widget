#include "ColorPalette.h"
#include "ui_ColorPalette.h"
#include <QtWidgets/QApplication>

int main(int argc, char* _argv[]) {

	QApplication app(argc, _argv);
	ColorPalette window;

	window.show();
	return app.exec();
}
