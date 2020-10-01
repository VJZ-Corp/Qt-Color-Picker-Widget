#include "ColorPalette.h"
#include <QPalette>
#include <ui_ColorPalette.h>

ColorPalette::ColorPalette(QWidget* parent) : QWidget(parent), _ui(new Ui::ColorPaletteClass) {

	_ui->setupUi(this);
	
	connect(_ui->Red, SIGNAL(valueChanged(int)), SLOT(onColorChanged()));
	connect(_ui->Blue, SIGNAL(valueChanged(int)), SLOT(onColorChanged()));
	connect(_ui->Green, SIGNAL(valueChanged(int)), SLOT(onColorChanged()));

	onColorChanged();
}

ColorPalette::~ColorPalette() {
	delete _ui;
}

void ColorPalette::onColorChanged() {

	m_color.setRgb(_ui->Red->value(), _ui->Green->value(), _ui->Blue->value());

	QPalette palette = _ui->displayWidget->palette();
	palette.setColor(QPalette::Window, m_color);

	_ui->displayWidget->setPalette(palette);
	emit colorChanged(m_color);
}