//  header block begin
// /usr/include/qt/QtGui/qinputmethod.h
#include <qinputmethod.h>
#include <QtGui>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtGui/qinputmethod.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK12QInputMethod10metaObjectEv(void *this_) {
  /*return*/ ((QInputMethod*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qinputmethod.h:67
// QTransform inputItemTransform()
extern "C"
void C_ZNK12QInputMethod18inputItemTransformEv(void *this_) {
  /*return*/ ((QInputMethod*)this_)->inputItemTransform();
}
// /usr/include/qt/QtGui/qinputmethod.h:68
// void setInputItemTransform(const class QTransform &)
extern "C"
void C_ZN12QInputMethod21setInputItemTransformERK10QTransform(void *this_, const QTransform & transform) {
  ((QInputMethod*)this_)->setInputItemTransform(transform);
}
// /usr/include/qt/QtGui/qinputmethod.h:70
// QRectF inputItemRectangle()
extern "C"
void C_ZNK12QInputMethod18inputItemRectangleEv(void *this_) {
  /*return*/ ((QInputMethod*)this_)->inputItemRectangle();
}
// /usr/include/qt/QtGui/qinputmethod.h:71
// void setInputItemRectangle(const class QRectF &)
extern "C"
void C_ZN12QInputMethod21setInputItemRectangleERK6QRectF(void *this_, const QRectF & rect) {
  ((QInputMethod*)this_)->setInputItemRectangle(rect);
}
// /usr/include/qt/QtGui/qinputmethod.h:74
// QRectF cursorRectangle()
extern "C"
void C_ZNK12QInputMethod15cursorRectangleEv(void *this_) {
  /*return*/ ((QInputMethod*)this_)->cursorRectangle();
}
// /usr/include/qt/QtGui/qinputmethod.h:75
// QRectF anchorRectangle()
extern "C"
void C_ZNK12QInputMethod15anchorRectangleEv(void *this_) {
  /*return*/ ((QInputMethod*)this_)->anchorRectangle();
}
// /usr/include/qt/QtGui/qinputmethod.h:78
// QRectF keyboardRectangle()
extern "C"
void C_ZNK12QInputMethod17keyboardRectangleEv(void *this_) {
  /*return*/ ((QInputMethod*)this_)->keyboardRectangle();
}
// /usr/include/qt/QtGui/qinputmethod.h:80
// QRectF inputItemClipRectangle()
extern "C"
void C_ZNK12QInputMethod22inputItemClipRectangleEv(void *this_) {
  /*return*/ ((QInputMethod*)this_)->inputItemClipRectangle();
}
// /usr/include/qt/QtGui/qinputmethod.h:88
// bool isVisible()
extern "C"
void C_ZNK12QInputMethod9isVisibleEv(void *this_) {
  /*return*/ ((QInputMethod*)this_)->isVisible();
}
// /usr/include/qt/QtGui/qinputmethod.h:89
// void setVisible(_Bool)
extern "C"
void C_ZN12QInputMethod10setVisibleEb(void *this_, bool visible) {
  ((QInputMethod*)this_)->setVisible(visible);
}
// /usr/include/qt/QtGui/qinputmethod.h:91
// bool isAnimating()
extern "C"
void C_ZNK12QInputMethod11isAnimatingEv(void *this_) {
  /*return*/ ((QInputMethod*)this_)->isAnimating();
}
// /usr/include/qt/QtGui/qinputmethod.h:93
// QLocale locale()
extern "C"
void C_ZNK12QInputMethod6localeEv(void *this_) {
  /*return*/ ((QInputMethod*)this_)->locale();
}
// /usr/include/qt/QtGui/qinputmethod.h:94
// Qt::LayoutDirection inputDirection()
extern "C"
void C_ZNK12QInputMethod14inputDirectionEv(void *this_) {
  /*return*/ ((QInputMethod*)this_)->inputDirection();
}
// static
// /usr/include/qt/QtGui/qinputmethod.h:96
// QVariant queryFocusObject(Qt::InputMethodQuery, class QVariant)
extern "C"
void C_ZN12QInputMethod16queryFocusObjectEN2Qt16InputMethodQueryE8QVariant(Qt::InputMethodQuery query, QVariant argument) {
  /*return*/ QInputMethod::queryFocusObject(query, argument);
}
// /usr/include/qt/QtGui/qinputmethod.h:99
// void show()
extern "C"
void C_ZN12QInputMethod4showEv(void *this_) {
  ((QInputMethod*)this_)->show();
}
// /usr/include/qt/QtGui/qinputmethod.h:100
// void hide()
extern "C"
void C_ZN12QInputMethod4hideEv(void *this_) {
  ((QInputMethod*)this_)->hide();
}
// /usr/include/qt/QtGui/qinputmethod.h:102
// void update(Qt::InputMethodQueries)
extern "C"
void C_ZN12QInputMethod6updateE6QFlagsIN2Qt16InputMethodQueryEE(void *this_, QFlags<Qt::InputMethodQuery> queries) {
  ((QInputMethod*)this_)->update(queries);
}
// /usr/include/qt/QtGui/qinputmethod.h:103
// void reset()
extern "C"
void C_ZN12QInputMethod5resetEv(void *this_) {
  ((QInputMethod*)this_)->reset();
}
// /usr/include/qt/QtGui/qinputmethod.h:104
// void commit()
extern "C"
void C_ZN12QInputMethod6commitEv(void *this_) {
  ((QInputMethod*)this_)->commit();
}
// /usr/include/qt/QtGui/qinputmethod.h:106
// void invokeAction(enum QInputMethod::Action, int)
extern "C"
void C_ZN12QInputMethod12invokeActionENS_6ActionEi(void *this_, QInputMethod::Action a, int cursorPosition) {
  ((QInputMethod*)this_)->invokeAction(a, cursorPosition);
}
// /usr/include/qt/QtGui/qinputmethod.h:109
// void cursorRectangleChanged()
extern "C"
void C_ZN12QInputMethod22cursorRectangleChangedEv(void *this_) {
  ((QInputMethod*)this_)->cursorRectangleChanged();
}
// /usr/include/qt/QtGui/qinputmethod.h:110
// void anchorRectangleChanged()
extern "C"
void C_ZN12QInputMethod22anchorRectangleChangedEv(void *this_) {
  ((QInputMethod*)this_)->anchorRectangleChanged();
}
// /usr/include/qt/QtGui/qinputmethod.h:111
// void keyboardRectangleChanged()
extern "C"
void C_ZN12QInputMethod24keyboardRectangleChangedEv(void *this_) {
  ((QInputMethod*)this_)->keyboardRectangleChanged();
}
// /usr/include/qt/QtGui/qinputmethod.h:112
// void inputItemClipRectangleChanged()
extern "C"
void C_ZN12QInputMethod29inputItemClipRectangleChangedEv(void *this_) {
  ((QInputMethod*)this_)->inputItemClipRectangleChanged();
}
// /usr/include/qt/QtGui/qinputmethod.h:113
// void visibleChanged()
extern "C"
void C_ZN12QInputMethod14visibleChangedEv(void *this_) {
  ((QInputMethod*)this_)->visibleChanged();
}
// /usr/include/qt/QtGui/qinputmethod.h:114
// void animatingChanged()
extern "C"
void C_ZN12QInputMethod16animatingChangedEv(void *this_) {
  ((QInputMethod*)this_)->animatingChanged();
}
// /usr/include/qt/QtGui/qinputmethod.h:115
// void localeChanged()
extern "C"
void C_ZN12QInputMethod13localeChangedEv(void *this_) {
  ((QInputMethod*)this_)->localeChanged();
}
// /usr/include/qt/QtGui/qinputmethod.h:116
// void inputDirectionChanged(Qt::LayoutDirection)
extern "C"
void C_ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection newDirection) {
  ((QInputMethod*)this_)->inputDirectionChanged(newDirection);
}
//  main block end
