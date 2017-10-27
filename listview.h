#ifndef LISTVIEW_H
#define LISTVIEW_H

#include <QWidget>
#include <QMouseEvent>
#include "listitem.h"

class ListView : public QWidget
{
    Q_OBJECT

public:
    ListView(QWidget *parent=0);
    ~ListView();

    void addItem(ListItem *item);

private:
    QList<ListItem *> items;
    bool isDragScrollBar;
    
    int rowHeight;
    int padding;
    int offsetY;
    int scrollBarWidth;
    int scrollBarPadding;
    
    int getItemsTotalHeight() const;
    int getScrollBarY() const;
    int getScrollBarHeight() const;
    int getScrollBarX() const;

protected:
    void paintEvent(QPaintEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
};	

#endif