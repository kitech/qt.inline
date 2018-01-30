//  header block begin
// /usr/include/qt/QtWidgets/qstackedlayout.h
#include <qstackedlayout.h>
#include <QtWidgets>

// QStackedLayout is pure virtual: false
// QStackedLayout has virtual projected: false
//  header block end

//  main block begin

class MyQStackedLayout : public QStackedLayout {
public:
  virtual ~MyQStackedLayout() {}
// void QStackedLayout()
MyQStackedLayout() : QStackedLayout() {}
// void QStackedLayout(class QWidget *)
MyQStackedLayout(QWidget * parent) : QStackedLayout(parent) {}
// void QStackedLayout(class QLayout *)
MyQStackedLayout(QLayout * parentLayout) : QStackedLayout(parentLayout) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK14QStackedLayout10metaObjectEv(void *this_) {
  return (void*)((QStackedLayout*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:66
// [-2] void QStackedLayout()
extern "C"
void* C_ZN14QStackedLayoutC2Ev() {
  return  new QStackedLayout();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:67
// [-2] void QStackedLayout(class QWidget *)
extern "C"
void* C_ZN14QStackedLayoutC2EP7QWidget(QWidget * parent) {
  return  new QStackedLayout(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:68
// [-2] void QStackedLayout(class QLayout *)
extern "C"
void* C_ZN14QStackedLayoutC2EP7QLayout(QLayout * parentLayout) {
  return  new QStackedLayout(parentLayout);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:69
// [-2] void ~QStackedLayout()
extern "C"
void C_ZN14QStackedLayoutD2Ev(void *this_) {
  delete (QStackedLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:71
// [4] int addWidget(class QWidget *)
extern "C"
int C_ZN14QStackedLayout9addWidgetEP7QWidget(void *this_, QWidget * w) {
  return (int)((QStackedLayout*)this_)->addWidget(w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:72
// [4] int insertWidget(int, class QWidget *)
extern "C"
int C_ZN14QStackedLayout12insertWidgetEiP7QWidget(void *this_, int index, QWidget * w) {
  return (int)((QStackedLayout*)this_)->insertWidget(index, w);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:74
// [8] QWidget * currentWidget()
extern "C"
void* C_ZNK14QStackedLayout13currentWidgetEv(void *this_) {
  return (void*)((QStackedLayout*)this_)->currentWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:75
// [4] int currentIndex()
extern "C"
int C_ZNK14QStackedLayout12currentIndexEv(void *this_) {
  return (int)((QStackedLayout*)this_)->currentIndex();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:77
// [8] QWidget * widget(int)
extern "C"
void* C_ZNK14QStackedLayout6widgetEi(void *this_, int arg0) {
  return (void*)((QStackedLayout*)this_)->widget(arg0);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:78
// [4] int count()
extern "C"
int C_ZNK14QStackedLayout5countEv(void *this_) {
  return (int)((QStackedLayout*)this_)->count();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:80
// [4] QStackedLayout::StackingMode stackingMode()
extern "C"
QStackedLayout::StackingMode C_ZNK14QStackedLayout12stackingModeEv(void *this_) {
  return (QStackedLayout::StackingMode)((QStackedLayout*)this_)->stackingMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:81
// [-2] void setStackingMode(enum QStackedLayout::StackingMode)
extern "C"
void C_ZN14QStackedLayout15setStackingModeENS_12StackingModeE(void *this_, QStackedLayout::StackingMode stackingMode) {
  ((QStackedLayout*)this_)->setStackingMode(stackingMode);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:84
// [-2] void addItem(class QLayoutItem *)
extern "C"
void C_ZN14QStackedLayout7addItemEP11QLayoutItem(void *this_, QLayoutItem * item) {
  ((QStackedLayout*)this_)->addItem(item);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:85
// [8] QSize sizeHint()
extern "C"
void* C_ZNK14QStackedLayout8sizeHintEv(void *this_) {
  auto rv = ((QStackedLayout*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:86
// [8] QSize minimumSize()
extern "C"
void* C_ZNK14QStackedLayout11minimumSizeEv(void *this_) {
  auto rv = ((QStackedLayout*)this_)->minimumSize();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:87
// [8] QLayoutItem * itemAt(int)
extern "C"
void* C_ZNK14QStackedLayout6itemAtEi(void *this_, int arg0) {
  return (void*)((QStackedLayout*)this_)->itemAt(arg0);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:88
// [8] QLayoutItem * takeAt(int)
extern "C"
void* C_ZN14QStackedLayout6takeAtEi(void *this_, int arg0) {
  return (void*)((QStackedLayout*)this_)->takeAt(arg0);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:89
// [-2] void setGeometry(const class QRect &)
extern "C"
void C_ZN14QStackedLayout11setGeometryERK5QRect(void *this_, const QRect & rect) {
  ((QStackedLayout*)this_)->setGeometry(rect);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:90
// [1] bool hasHeightForWidth()
extern "C"
bool C_ZNK14QStackedLayout17hasHeightForWidthEv(void *this_) {
  return (bool)((QStackedLayout*)this_)->hasHeightForWidth();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:91
// [4] int heightForWidth(int)
extern "C"
int C_ZNK14QStackedLayout14heightForWidthEi(void *this_, int width) {
  return (int)((QStackedLayout*)this_)->heightForWidth(width);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:94
// [-2] void widgetRemoved(int)
extern "C"
void C_ZN14QStackedLayout13widgetRemovedEi(void *this_, int index) {
  ((QStackedLayout*)this_)->widgetRemoved(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:95
// [-2] void currentChanged(int)
extern "C"
void C_ZN14QStackedLayout14currentChangedEi(void *this_, int index) {
  ((QStackedLayout*)this_)->currentChanged(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:98
// [-2] void setCurrentIndex(int)
extern "C"
void C_ZN14QStackedLayout15setCurrentIndexEi(void *this_, int index) {
  ((QStackedLayout*)this_)->setCurrentIndex(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:99
// [-2] void setCurrentWidget(class QWidget *)
extern "C"
void C_ZN14QStackedLayout16setCurrentWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QStackedLayout*)this_)->setCurrentWidget(w);
}
//  main block end
