// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qwidget.h
// dst-file: /src/widgets/qwidget.cxx
//

// header block begin =>
#include <qwidget.h>

extern "C" {

// QWidget(class QWidget *, Qt::WindowFlags)
QWidget* dector_ZN7QWidgetC1EPS_6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QWidget) == 32, "tyszerr");
  QWidget* rthis = new QWidget(parent, f);
  return rthis;
}

// ~QWidget()
void dedtor_ZN7QWidgetD0Ev(QWidget* that)
{
  QWidget* rthis = (QWidget*)that;
  delete rthis;
}

  // proto:  void QWidget::setSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical);
void _ZN7QWidget13setSizePolicyEN11QSizePolicy6PolicyES1_(void *that, QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical)
{
  QWidget *cthat = (QWidget *)that;
   cthat->setSizePolicy(horizontal, vertical);
}

  // proto:  void QWidget::update(int x, int y, int w, int h);
void _ZN7QWidget6updateEiiii(void *that, int x, int y, int w, int h)
{
  QWidget *cthat = (QWidget *)that;
   cthat->update(x, y, w, h);
}

  // proto:  QRect QWidget::rect();
QRect* _ZNK7QWidget4rectEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  auto recret = cthat->rect();
  return new QRect(recret);
}

  // proto:  bool QWidget::isHidden();
bool _ZNK7QWidget8isHiddenEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->isHidden();
}

  // proto:  QWidget * QWidget::childAt(int x, int y);
QWidget * _ZNK7QWidget7childAtEii(void *that, int x, int y)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->childAt(x, y);
}

  // proto:  int QWidget::width();
int _ZNK7QWidget5widthEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->width();
}

  // proto:  bool QWidget::updatesEnabled();
bool _ZNK7QWidget14updatesEnabledEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->updatesEnabled();
}

  // proto:  void QWidget::setGeometry(int x, int y, int w, int h);
void _ZN7QWidget11setGeometryEiiii(void *that, int x, int y, int w, int h)
{
  QWidget *cthat = (QWidget *)that;
   cthat->setGeometry(x, y, w, h);
}

  // proto:  bool QWidget::testAttribute(Qt::WidgetAttribute );
bool _ZNK7QWidget13testAttributeEN2Qt15WidgetAttributeE(void *that, Qt::WidgetAttribute arg1)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->testAttribute(arg1);
}

  // proto:  int QWidget::height();
int _ZNK7QWidget6heightEv(void *that)
{
  QWidget *cthat = (QWidget *)that;
  return cthat->height();
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

