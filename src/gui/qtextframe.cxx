//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#include <qtextobject.h>
#include <QtGui>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtGui/qtextobject.h:119
// const QMetaObject * metaObject()
extern "C"
void C_ZNK10QTextFrame10metaObjectEv(void *this_) {
  /*return*/ ((QTextFrame*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qtextobject.h:122
// void QTextFrame(class QTextDocument *)
extern "C"
void* C_ZN10QTextFrameC1EP13QTextDocument(QTextDocument * doc) {
  return new QTextFrame(doc);
}
// virtual
// /usr/include/qt/QtGui/qtextobject.h:123
// void ~QTextFrame()
extern "C"
void C_ZN10QTextFrameD1Ev(void *this_) {
  delete (QTextFrame*)(this_);
}
// inline
// /usr/include/qt/QtGui/qtextobject.h:125
// void setFrameFormat(const class QTextFrameFormat &)
extern "C"
void C_ZN10QTextFrame14setFrameFormatERK16QTextFrameFormat(void *this_, const QTextFrameFormat & format) {
  ((QTextFrame*)this_)->setFrameFormat(format);
}
// inline
// /usr/include/qt/QtGui/qtextobject.h:126
// QTextFrameFormat frameFormat()
extern "C"
void C_ZNK10QTextFrame11frameFormatEv(void *this_) {
  /*return*/ ((QTextFrame*)this_)->frameFormat();
}
// /usr/include/qt/QtGui/qtextobject.h:128
// QTextCursor firstCursorPosition()
extern "C"
void C_ZNK10QTextFrame19firstCursorPositionEv(void *this_) {
  /*return*/ ((QTextFrame*)this_)->firstCursorPosition();
}
// /usr/include/qt/QtGui/qtextobject.h:129
// QTextCursor lastCursorPosition()
extern "C"
void C_ZNK10QTextFrame18lastCursorPositionEv(void *this_) {
  /*return*/ ((QTextFrame*)this_)->lastCursorPosition();
}
// /usr/include/qt/QtGui/qtextobject.h:130
// int firstPosition()
extern "C"
void C_ZNK10QTextFrame13firstPositionEv(void *this_) {
  /*return*/ ((QTextFrame*)this_)->firstPosition();
}
// /usr/include/qt/QtGui/qtextobject.h:131
// int lastPosition()
extern "C"
void C_ZNK10QTextFrame12lastPositionEv(void *this_) {
  /*return*/ ((QTextFrame*)this_)->lastPosition();
}
// /usr/include/qt/QtGui/qtextobject.h:133
// QTextFrameLayoutData * layoutData()
extern "C"
void C_ZNK10QTextFrame10layoutDataEv(void *this_) {
  /*return*/ ((QTextFrame*)this_)->layoutData();
}
// /usr/include/qt/QtGui/qtextobject.h:134
// void setLayoutData(class QTextFrameLayoutData *)
extern "C"
void C_ZN10QTextFrame13setLayoutDataEP20QTextFrameLayoutData(void *this_, QTextFrameLayoutData * data) {
  ((QTextFrame*)this_)->setLayoutData(data);
}
// /usr/include/qt/QtGui/qtextobject.h:136
// QList<QTextFrame *> childFrames()
extern "C"
void C_ZNK10QTextFrame11childFramesEv(void *this_) {
  /*return*/ ((QTextFrame*)this_)->childFrames();
}
// /usr/include/qt/QtGui/qtextobject.h:137
// QTextFrame * parentFrame()
extern "C"
void C_ZNK10QTextFrame11parentFrameEv(void *this_) {
  /*return*/ ((QTextFrame*)this_)->parentFrame();
}
// /usr/include/qt/QtGui/qtextobject.h:180
// QTextFrame::iterator begin()
extern "C"
void C_ZNK10QTextFrame5beginEv(void *this_) {
  /*return*/ ((QTextFrame*)this_)->begin();
}
// /usr/include/qt/QtGui/qtextobject.h:181
// QTextFrame::iterator end()
extern "C"
void C_ZNK10QTextFrame3endEv(void *this_) {
  /*return*/ ((QTextFrame*)this_)->end();
}
//  main block end
