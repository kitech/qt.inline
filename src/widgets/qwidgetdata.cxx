//  header block begin
// /usr/include/qt/QtWidgets/qwidget.h
#include <qwidget.h>
#include <QtWidgets>

// QWidgetData is pure virtual: false
// QWidgetData has virtual projected: false
//  header block end

//  main block begin

class MyQWidgetData : public QWidgetData {
public:
  virtual ~MyQWidgetData() {}
};

//  main block end
