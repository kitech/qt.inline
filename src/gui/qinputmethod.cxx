//  header block begin
// /usr/include/qt/QtGui/qinputmethod.h
#include <qinputmethod.h>
#include <QtGui>

// QInputMethod is pure virtual: false
// QInputMethod has virtual projected: false
//  header block end

//  main block begin

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:56
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK12QInputMethod10metaObjectEv(void *this_) {
  return (void*)((QInputMethod*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:68
// [88] QTransform inputItemTransform()
extern "C"
void* C_ZNK12QInputMethod18inputItemTransformEv(void *this_) {
  auto rv = ((QInputMethod*)this_)->inputItemTransform();
return new QTransform(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:69
// [-2] void setInputItemTransform(const class QTransform &)
extern "C"
void C_ZN12QInputMethod21setInputItemTransformERK10QTransform(void *this_, QTransform* transform) {
  ((QInputMethod*)this_)->setInputItemTransform(*transform);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:71
// [32] QRectF inputItemRectangle()
extern "C"
void* C_ZNK12QInputMethod18inputItemRectangleEv(void *this_) {
  auto rv = ((QInputMethod*)this_)->inputItemRectangle();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:72
// [-2] void setInputItemRectangle(const class QRectF &)
extern "C"
void C_ZN12QInputMethod21setInputItemRectangleERK6QRectF(void *this_, QRectF* rect) {
  ((QInputMethod*)this_)->setInputItemRectangle(*rect);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:75
// [32] QRectF cursorRectangle()
extern "C"
void* C_ZNK12QInputMethod15cursorRectangleEv(void *this_) {
  auto rv = ((QInputMethod*)this_)->cursorRectangle();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:76
// [32] QRectF anchorRectangle()
extern "C"
void* C_ZNK12QInputMethod15anchorRectangleEv(void *this_) {
  auto rv = ((QInputMethod*)this_)->anchorRectangle();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:79
// [32] QRectF keyboardRectangle()
extern "C"
void* C_ZNK12QInputMethod17keyboardRectangleEv(void *this_) {
  auto rv = ((QInputMethod*)this_)->keyboardRectangle();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:81
// [32] QRectF inputItemClipRectangle()
extern "C"
void* C_ZNK12QInputMethod22inputItemClipRectangleEv(void *this_) {
  auto rv = ((QInputMethod*)this_)->inputItemClipRectangle();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:89
// [1] bool isVisible()
extern "C"
bool C_ZNK12QInputMethod9isVisibleEv(void *this_) {
  return (bool)((QInputMethod*)this_)->isVisible();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:90
// [-2] void setVisible(_Bool)
extern "C"
void C_ZN12QInputMethod10setVisibleEb(void *this_, bool visible) {
  ((QInputMethod*)this_)->setVisible(visible);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:92
// [1] bool isAnimating()
extern "C"
bool C_ZNK12QInputMethod11isAnimatingEv(void *this_) {
  return (bool)((QInputMethod*)this_)->isAnimating();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:94
// [8] QLocale locale()
extern "C"
void* C_ZNK12QInputMethod6localeEv(void *this_) {
  auto rv = ((QInputMethod*)this_)->locale();
return new QLocale(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:95
// [4] Qt::LayoutDirection inputDirection()
extern "C"
Qt::LayoutDirection C_ZNK12QInputMethod14inputDirectionEv(void *this_) {
  return (Qt::LayoutDirection)((QInputMethod*)this_)->inputDirection();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:97
// [16] QVariant queryFocusObject(Qt::InputMethodQuery, class QVariant)
extern "C"
void* C_ZN12QInputMethod16queryFocusObjectEN2Qt16InputMethodQueryE8QVariant(Qt::InputMethodQuery query, QVariant* argument) {
  auto rv = QInputMethod::queryFocusObject(query, *argument);
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:100
// [-2] void show()
extern "C"
void C_ZN12QInputMethod4showEv(void *this_) {
  ((QInputMethod*)this_)->show();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:101
// [-2] void hide()
extern "C"
void C_ZN12QInputMethod4hideEv(void *this_) {
  ((QInputMethod*)this_)->hide();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:104
// [-2] void reset()
extern "C"
void C_ZN12QInputMethod5resetEv(void *this_) {
  ((QInputMethod*)this_)->reset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:105
// [-2] void commit()
extern "C"
void C_ZN12QInputMethod6commitEv(void *this_) {
  ((QInputMethod*)this_)->commit();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:107
// [-2] void invokeAction(enum QInputMethod::Action, int)
extern "C"
void C_ZN12QInputMethod12invokeActionENS_6ActionEi(void *this_, QInputMethod::Action a, int cursorPosition) {
  ((QInputMethod*)this_)->invokeAction(a, cursorPosition);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:110
// [-2] void cursorRectangleChanged()
extern "C"
void C_ZN12QInputMethod22cursorRectangleChangedEv(void *this_) {
  ((QInputMethod*)this_)->cursorRectangleChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:111
// [-2] void anchorRectangleChanged()
extern "C"
void C_ZN12QInputMethod22anchorRectangleChangedEv(void *this_) {
  ((QInputMethod*)this_)->anchorRectangleChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:112
// [-2] void keyboardRectangleChanged()
extern "C"
void C_ZN12QInputMethod24keyboardRectangleChangedEv(void *this_) {
  ((QInputMethod*)this_)->keyboardRectangleChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:113
// [-2] void inputItemClipRectangleChanged()
extern "C"
void C_ZN12QInputMethod29inputItemClipRectangleChangedEv(void *this_) {
  ((QInputMethod*)this_)->inputItemClipRectangleChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:114
// [-2] void visibleChanged()
extern "C"
void C_ZN12QInputMethod14visibleChangedEv(void *this_) {
  ((QInputMethod*)this_)->visibleChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:115
// [-2] void animatingChanged()
extern "C"
void C_ZN12QInputMethod16animatingChangedEv(void *this_) {
  ((QInputMethod*)this_)->animatingChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:116
// [-2] void localeChanged()
extern "C"
void C_ZN12QInputMethod13localeChangedEv(void *this_) {
  ((QInputMethod*)this_)->localeChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qinputmethod.h:117
// [-2] void inputDirectionChanged(Qt::LayoutDirection)
extern "C"
void C_ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection newDirection) {
  ((QInputMethod*)this_)->inputDirectionChanged(newDirection);
}
//  main block end
