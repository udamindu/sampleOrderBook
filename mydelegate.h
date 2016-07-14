#pragma once
#include "qitemdelegate.h"
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QSpinBox>

class MyDelegate :
	public QItemDelegate
{
	Q_OBJECT
public:
	explicit MyDelegate(QObject *parent = 0);

	// Create Editor when we construct MyDelegate
    QWidget* createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;

	// Then, we set the Editor
    void setEditorData(QWidget *editor, const QModelIndex &index) const;

	// When we modify data, this model reflect the change
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;

	// Give the SpinBox the info on size and location
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

