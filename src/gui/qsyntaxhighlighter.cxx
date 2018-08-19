//  header block begin
// since 0x040100
// /usr/include/qt/QtGui/qsyntaxhighlighter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsyntaxhighlighter.h>
#include <QtGui>
#include "callback_inherit.h"

// QSyntaxHighlighter is pure virtual: true
// QSyntaxHighlighter has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSyntaxHighlighter : public QSyntaxHighlighter {
public:
  virtual ~MyQSyntaxHighlighter() {}
// void QSyntaxHighlighter(QObject *)
MyQSyntaxHighlighter(QObject * parent) : QSyntaxHighlighter(parent) {}
// void QSyntaxHighlighter(QTextDocument *)
MyQSyntaxHighlighter(QTextDocument * parent) : QSyntaxHighlighter(parent) {}
// Protected purevirtual virtual Visibility=Default Availability=Available
// void highlightBlock(const QString &)
  virtual void highlightBlock(const QString & text) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"highlightBlock", &handled, 1, (uint64_t)&text, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // QSyntaxHighlighter::highlightBlock(text);
  }
  }

// Protected Visibility=Default Availability=Available
// void setFormat(int, int, const QTextCharFormat &)
  virtual void setFormat(int start, int count, const QTextCharFormat & format) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setFormat", &handled, 3, (uint64_t)start, (uint64_t)count, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSyntaxHighlighter::setFormat(start, count, format);
  }
  }

// Protected Visibility=Default Availability=Available
// void setFormat(int, int, const QColor &)
  virtual void setFormat(int start, int count, const QColor & color) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setFormat", &handled, 3, (uint64_t)start, (uint64_t)count, (uint64_t)&color, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSyntaxHighlighter::setFormat(start, count, color);
  }
  }

// Protected Visibility=Default Availability=Available
// void setFormat(int, int, const QFont &)
  virtual void setFormat(int start, int count, const QFont & font) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setFormat", &handled, 3, (uint64_t)start, (uint64_t)count, (uint64_t)&font, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSyntaxHighlighter::setFormat(start, count, font);
  }
  }

// Protected Visibility=Default Availability=Available
// QTextCharFormat format(int)
  virtual QTextCharFormat format(int pos) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"format", &handled, 1, (uint64_t)pos, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QTextCharFormat*)(irv);
      // RecordRecordQTextCharFormat
    } else {
    return QSyntaxHighlighter::format(pos);
  }
  }

// Protected Visibility=Default Availability=Available
// int previousBlockState()
  virtual int previousBlockState() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"previousBlockState", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QSyntaxHighlighter::previousBlockState();
  }
  }

// Protected Visibility=Default Availability=Available
// int currentBlockState()
  virtual int currentBlockState() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"currentBlockState", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QSyntaxHighlighter::currentBlockState();
  }
  }

// Protected Visibility=Default Availability=Available
// void setCurrentBlockState(int)
  virtual void setCurrentBlockState(int newState) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setCurrentBlockState", &handled, 1, (uint64_t)newState, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSyntaxHighlighter::setCurrentBlockState(newState);
  }
  }

// Protected Visibility=Default Availability=Available
// void setCurrentBlockUserData(QTextBlockUserData *)
  virtual void setCurrentBlockUserData(QTextBlockUserData * data) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setCurrentBlockUserData", &handled, 1, (uint64_t)data, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSyntaxHighlighter::setCurrentBlockUserData(data);
  }
  }

// Protected Visibility=Default Availability=Available
// QTextBlockUserData * currentBlockUserData()
  virtual QTextBlockUserData * currentBlockUserData() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"currentBlockUserData", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QTextBlockUserData *)(irv);
      // PointerPointerQTextBlockUserData *
    } else {
    return QSyntaxHighlighter::currentBlockUserData();
  }
  }

// Protected Visibility=Default Availability=Available
// QTextBlock currentBlock()
  virtual QTextBlock currentBlock() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"currentBlock", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QTextBlock*)(irv);
      // RecordRecordQTextBlock
    } else {
    return QSyntaxHighlighter::currentBlock();
  }
  }

};

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:77
// [-2] void highlightBlock(const QString &)
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:79
// [-2] void setFormat(int, int, const QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN18QSyntaxHighlighter9setFormatEiiRK15QTextCharFormat(void *this_, int start, int count, QTextCharFormat* format) {
  ((QSyntaxHighlighter*)this_)->QSyntaxHighlighter::setFormat(start, count, *format);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:80
// [-2] void setFormat(int, int, const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN18QSyntaxHighlighter9setFormatEiiRK6QColor(void *this_, int start, int count, QColor* color) {
  ((QSyntaxHighlighter*)this_)->QSyntaxHighlighter::setFormat(start, count, *color);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:81
// [-2] void setFormat(int, int, const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN18QSyntaxHighlighter9setFormatEiiRK5QFont(void *this_, int start, int count, QFont* font) {
  ((QSyntaxHighlighter*)this_)->QSyntaxHighlighter::setFormat(start, count, *font);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:82
// [16] QTextCharFormat format(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QSyntaxHighlighter6formatEi(void *this_, int pos) {
  auto rv = ((QSyntaxHighlighter*)this_)->QSyntaxHighlighter::format(pos);
return new QTextCharFormat(rv);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:84
// [4] int previousBlockState()
extern "C" Q_DECL_EXPORT
int C_ZNK18QSyntaxHighlighter18previousBlockStateEv(void *this_) {
  return (int)((QSyntaxHighlighter*)this_)->QSyntaxHighlighter::previousBlockState();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:85
// [4] int currentBlockState()
extern "C" Q_DECL_EXPORT
int C_ZNK18QSyntaxHighlighter17currentBlockStateEv(void *this_) {
  return (int)((QSyntaxHighlighter*)this_)->QSyntaxHighlighter::currentBlockState();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:86
// [-2] void setCurrentBlockState(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QSyntaxHighlighter20setCurrentBlockStateEi(void *this_, int newState) {
  ((QSyntaxHighlighter*)this_)->QSyntaxHighlighter::setCurrentBlockState(newState);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:88
// [-2] void setCurrentBlockUserData(QTextBlockUserData *)
extern "C" Q_DECL_EXPORT
void C_ZN18QSyntaxHighlighter23setCurrentBlockUserDataEP18QTextBlockUserData(void *this_, QTextBlockUserData * data) {
  ((QSyntaxHighlighter*)this_)->QSyntaxHighlighter::setCurrentBlockUserData(data);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:89
// [8] QTextBlockUserData * currentBlockUserData()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QSyntaxHighlighter20currentBlockUserDataEv(void *this_) {
  return (void*)((QSyntaxHighlighter*)this_)->QSyntaxHighlighter::currentBlockUserData();
}

// Protected Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:91
// [16] QTextBlock currentBlock()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK18QSyntaxHighlighter12currentBlockEv(void *this_) {
  auto rv = ((QSyntaxHighlighter*)this_)->QSyntaxHighlighter::currentBlock();
return new QTextBlock(rv);
}
#endif // QT_VERSION >= 0x040400

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QSyntaxHighlighter10metaObjectEv(void *this_) {
  return (void*)((QSyntaxHighlighter*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSyntaxHighlighter11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSyntaxHighlighter*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QSyntaxHighlighter11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSyntaxHighlighter*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSyntaxHighlighter2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSyntaxHighlighter::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSyntaxHighlighter6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSyntaxHighlighter::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:65
// [-2] void QSyntaxHighlighter(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSyntaxHighlighterC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQSyntaxHighlighter*)(0);
  return 0; // new MyQSyntaxHighlighter(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:66
// [-2] void QSyntaxHighlighter(QTextDocument *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSyntaxHighlighterC2EP13QTextDocument(QTextDocument * parent) {
  auto _nilp = (MyQSyntaxHighlighter*)(0);
  return 0; // new MyQSyntaxHighlighter(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:67
// [-2] void ~QSyntaxHighlighter()
extern "C" Q_DECL_EXPORT
void C_ZN18QSyntaxHighlighterD2Ev(void *this_) {
  delete (QSyntaxHighlighter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:69
// [-2] void setDocument(QTextDocument *)
extern "C" Q_DECL_EXPORT
void C_ZN18QSyntaxHighlighter11setDocumentEP13QTextDocument(void *this_, QTextDocument * doc) {
  ((QSyntaxHighlighter*)this_)->setDocument(doc);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:70
// [8] QTextDocument * document()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QSyntaxHighlighter8documentEv(void *this_) {
  return (void*)((QSyntaxHighlighter*)this_)->document();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:73
// [-2] void rehighlight()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN18QSyntaxHighlighter11rehighlightEv(void *this_) {
  ((QSyntaxHighlighter*)this_)->rehighlight();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:74
// [-2] void rehighlightBlock(const QTextBlock &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN18QSyntaxHighlighter16rehighlightBlockERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QSyntaxHighlighter*)this_)->rehighlightBlock(*block);
}
#endif // QT_VERSION >= 0x040600

//  main block end
