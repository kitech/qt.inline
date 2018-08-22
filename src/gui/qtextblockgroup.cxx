//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextBlockGroup is pure virtual: false
// QTextBlockGroup has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextBlockGroup : public QTextBlockGroup {
public:
// Protected virtual Visibility=Default Availability=Available
// [-2] void blockInserted(const QTextBlock &)
  virtual void blockInserted(const QTextBlock & block)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"blockInserted", &handled, 1, (uint64_t)&block, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextBlockGroup::blockInserted(block);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void blockRemoved(const QTextBlock &)
  virtual void blockRemoved(const QTextBlock & block)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"blockRemoved", &handled, 1, (uint64_t)&block, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextBlockGroup::blockRemoved(block);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void blockFormatChanged(const QTextBlock &)
  virtual void blockFormatChanged(const QTextBlock & block)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"blockFormatChanged", &handled, 1, (uint64_t)&block, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextBlockGroup::blockFormatChanged(block);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:98
// [-2] void blockInserted(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextBlockGroup13blockInsertedERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QTextBlockGroup*)this_)->QTextBlockGroup::blockInserted(*block);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:99
// [-2] void blockRemoved(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextBlockGroup12blockRemovedERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QTextBlockGroup*)this_)->QTextBlockGroup::blockRemoved(*block);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:100
// [-2] void blockFormatChanged(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextBlockGroup18blockFormatChangedERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QTextBlockGroup*)this_)->QTextBlockGroup::blockFormatChanged(*block);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:92
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTextBlockGroup10metaObjectEv(void *this_) {
  return (void*)((QTextBlockGroup*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:92
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QTextBlockGroup11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTextBlockGroup*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:92
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QTextBlockGroup11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTextBlockGroup*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:92
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QTextBlockGroup2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextBlockGroup::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:92
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QTextBlockGroup6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextBlockGroup::trUtf8(s, c, n);
return new QString(rv);
}

//  main block end
