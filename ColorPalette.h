#pragma once

#include <QWidget>
#include <QColor>
#include "ui_ColorPalette.h"

namespace Ui {
	class ColorPalette;
};

class ColorPalette : public QWidget {

	Q_OBJECT;
	//Q_PROPERTY(QColor color READ color NOTIFY colorChanged)

public:
	ColorPalette(QWidget* parent = Q_NULLPTR);
	~ColorPalette();

signals:
	void colorChanged(QColor arg);

private slots:
	void onColorChanged();

private:
	Ui::ColorPaletteClass* _ui;
	QColor m_color;
};
