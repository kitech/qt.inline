//  header block begin
// /usr/include/qt/QtGui/qsyntaxhighlighter.h
#include <qsyntaxhighlighter.h>
#include <QtGui>

// QSyntaxHighlighter is pure virtual: true
// QSyntaxHighlighter has virtual projected: true
//  header block end

//  main block begin
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:77
// [-2] void highlightBlock(const class QString &)
extern "C"
void* callback_ZN18QSyntaxHighlighter14highlightBlockERK7QString_fnptr = 0;
extern "C" void set_callback_ZN18QSyntaxHighlighter14highlightBlockERK7QString(void*cbfn)
{ callback_ZN18QSyntaxHighlighter14highlightBlockERK7QString_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:79
// [-2] void setFormat(int, int, const class QTextCharFormat &)
extern "C"
void* callback_ZN18QSyntaxHighlighter9setFormatEiiRK15QTextCharFormat_fnptr = 0;
extern "C" void set_callback_ZN18QSyntaxHighlighter9setFormatEiiRK15QTextCharFormat(void*cbfn)
{ callback_ZN18QSyntaxHighlighter9setFormatEiiRK15QTextCharFormat_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:80
// [-2] void setFormat(int, int, const class QColor &)
extern "C"
void* callback_ZN18QSyntaxHighlighter9setFormatEiiRK6QColor_fnptr = 0;
extern "C" void set_callback_ZN18QSyntaxHighlighter9setFormatEiiRK6QColor(void*cbfn)
{ callback_ZN18QSyntaxHighlighter9setFormatEiiRK6QColor_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:81
// [-2] void setFormat(int, int, const class QFont &)
extern "C"
void* callback_ZN18QSyntaxHighlighter9setFormatEiiRK5QFont_fnptr = 0;
extern "C" void set_callback_ZN18QSyntaxHighlighter9setFormatEiiRK5QFont(void*cbfn)
{ callback_ZN18QSyntaxHighlighter9setFormatEiiRK5QFont_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:82
// [16] QTextCharFormat format(int)
extern "C"
void* callback_ZNK18QSyntaxHighlighter6formatEi_fnptr = 0;
extern "C" void set_callback_ZNK18QSyntaxHighlighter6formatEi(void*cbfn)
{ callback_ZNK18QSyntaxHighlighter6formatEi_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:84
// [4] int previousBlockState()
extern "C"
void* callback_ZNK18QSyntaxHighlighter18previousBlockStateEv_fnptr = 0;
extern "C" void set_callback_ZNK18QSyntaxHighlighter18previousBlockStateEv(void*cbfn)
{ callback_ZNK18QSyntaxHighlighter18previousBlockStateEv_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:85
// [4] int currentBlockState()
extern "C"
void* callback_ZNK18QSyntaxHighlighter17currentBlockStateEv_fnptr = 0;
extern "C" void set_callback_ZNK18QSyntaxHighlighter17currentBlockStateEv(void*cbfn)
{ callback_ZNK18QSyntaxHighlighter17currentBlockStateEv_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:86
// [-2] void setCurrentBlockState(int)
extern "C"
void* callback_ZN18QSyntaxHighlighter20setCurrentBlockStateEi_fnptr = 0;
extern "C" void set_callback_ZN18QSyntaxHighlighter20setCurrentBlockStateEi(void*cbfn)
{ callback_ZN18QSyntaxHighlighter20setCurrentBlockStateEi_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:88
// [-2] void setCurrentBlockUserData(class QTextBlockUserData *)
extern "C"
void* callback_ZN18QSyntaxHighlighter23setCurrentBlockUserDataEP18QTextBlockUserData_fnptr = 0;
extern "C" void set_callback_ZN18QSyntaxHighlighter23setCurrentBlockUserDataEP18QTextBlockUserData(void*cbfn)
{ callback_ZN18QSyntaxHighlighter23setCurrentBlockUserDataEP18QTextBlockUserData_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:89
// [8] QTextBlockUserData * currentBlockUserData()
extern "C"
void* callback_ZNK18QSyntaxHighlighter20currentBlockUserDataEv_fnptr = 0;
extern "C" void set_callback_ZNK18QSyntaxHighlighter20currentBlockUserDataEv(void*cbfn)
{ callback_ZNK18QSyntaxHighlighter20currentBlockUserDataEv_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:91
// [16] QTextBlock currentBlock()
extern "C"
void* callback_ZNK18QSyntaxHighlighter12currentBlockEv_fnptr = 0;
extern "C" void set_callback_ZNK18QSyntaxHighlighter12currentBlockEv(void*cbfn)
{ callback_ZNK18QSyntaxHighlighter12currentBlockEv_fnptr = cbfn; }

class MyQSyntaxHighlighter : public QSyntaxHighlighter {
public:
  virtual ~MyQSyntaxHighlighter() {}
// void QSyntaxHighlighter(class QObject *)
MyQSyntaxHighlighter(QObject * parent) : QSyntaxHighlighter(parent) {}
// void QSyntaxHighlighter(class QTextDocument *)
MyQSyntaxHighlighter(QTextDocument * parent) : QSyntaxHighlighter(parent) {}
// void highlightBlock(const class QString &)
  virtual void highlightBlock(const QString & text) {
    auto fnptr = ((void (*)(void* , QString*))(callback_ZN18QSyntaxHighlighter14highlightBlockERK7QString_fnptr));
    if (fnptr != 0) {
      fnptr(this , (QString*)&text);
    }
    QSyntaxHighlighter::highlightBlock(text);
  }
// void setFormat(int, int, const class QTextCharFormat &)
  virtual void setFormat(int start, int count, const QTextCharFormat & format) {
    auto fnptr = ((void (*)(void* , int, int, QTextCharFormat*))(callback_ZN18QSyntaxHighlighter9setFormatEiiRK15QTextCharFormat_fnptr));
    if (fnptr != 0) {
      fnptr(this , start, count, (QTextCharFormat*)&format);
    }
    QSyntaxHighlighter::setFormat(start, count, format);
  }
// void setFormat(int, int, const class QColor &)
  virtual void setFormat(int start, int count, const QColor & color) {
    auto fnptr = ((void (*)(void* , int, int, QColor*))(callback_ZN18QSyntaxHighlighter9setFormatEiiRK6QColor_fnptr));
    if (fnptr != 0) {
      fnptr(this , start, count, (QColor*)&color);
    }
    QSyntaxHighlighter::setFormat(start, count, color);
  }
// void setFormat(int, int, const class QFont &)
  virtual void setFormat(int start, int count, const QFont & font) {
    auto fnptr = ((void (*)(void* , int, int, QFont*))(callback_ZN18QSyntaxHighlighter9setFormatEiiRK5QFont_fnptr));
    if (fnptr != 0) {
      fnptr(this , start, count, (QFont*)&font);
    }
    QSyntaxHighlighter::setFormat(start, count, font);
  }
// QTextCharFormat format(int)
  virtual QTextCharFormat format(int pos) {
    auto fnptr = ((QTextCharFormat (*)(void* , int))(callback_ZNK18QSyntaxHighlighter6formatEi_fnptr));
    if (fnptr != 0) {
      fnptr(this , pos);
    }
    return QSyntaxHighlighter::format(pos);
  }
// int previousBlockState()
  virtual int previousBlockState() {
    auto fnptr = ((int (*)(void* ))(callback_ZNK18QSyntaxHighlighter18previousBlockStateEv_fnptr));
    if (fnptr != 0) {
      fnptr(this );
    }
    return QSyntaxHighlighter::previousBlockState();
  }
// int currentBlockState()
  virtual int currentBlockState() {
    auto fnptr = ((int (*)(void* ))(callback_ZNK18QSyntaxHighlighter17currentBlockStateEv_fnptr));
    if (fnptr != 0) {
      fnptr(this );
    }
    return QSyntaxHighlighter::currentBlockState();
  }
// void setCurrentBlockState(int)
  virtual void setCurrentBlockState(int newState) {
    auto fnptr = ((void (*)(void* , int))(callback_ZN18QSyntaxHighlighter20setCurrentBlockStateEi_fnptr));
    if (fnptr != 0) {
      fnptr(this , newState);
    }
    QSyntaxHighlighter::setCurrentBlockState(newState);
  }
// void setCurrentBlockUserData(class QTextBlockUserData *)
  virtual void setCurrentBlockUserData(QTextBlockUserData * data) {
    auto fnptr = ((void (*)(void* , QTextBlockUserData *))(callback_ZN18QSyntaxHighlighter23setCurrentBlockUserDataEP18QTextBlockUserData_fnptr));
    if (fnptr != 0) {
      fnptr(this , data);
    }
    QSyntaxHighlighter::setCurrentBlockUserData(data);
  }
// QTextBlockUserData * currentBlockUserData()
  virtual QTextBlockUserData * currentBlockUserData() {
    auto fnptr = ((QTextBlockUserData * (*)(void* ))(callback_ZNK18QSyntaxHighlighter20currentBlockUserDataEv_fnptr));
    if (fnptr != 0) {
      fnptr(this );
    }
    return QSyntaxHighlighter::currentBlockUserData();
  }
// QTextBlock currentBlock()
  virtual QTextBlock currentBlock() {
    auto fnptr = ((QTextBlock (*)(void* ))(callback_ZNK18QSyntaxHighlighter12currentBlockEv_fnptr));
    if (fnptr != 0) {
      fnptr(this );
    }
    return QSyntaxHighlighter::currentBlock();
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:62
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK18QSyntaxHighlighter10metaObjectEv(void *this_) {
  return (void*)((QSyntaxHighlighter*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:65
// [-2] void QSyntaxHighlighter(class QObject *)
extern "C"
void* C_ZN18QSyntaxHighlighterC1EP7QObject(QObject * parent) {
  auto _nilp = (MyQSyntaxHighlighter*)(0);
  return 0; // new MyQSyntaxHighlighter(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:66
// [-2] void QSyntaxHighlighter(class QTextDocument *)
extern "C"
void* C_ZN18QSyntaxHighlighterC1EP13QTextDocument(QTextDocument * parent) {
  auto _nilp = (MyQSyntaxHighlighter*)(0);
  return 0; // new MyQSyntaxHighlighter(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:67
// [-2] void ~QSyntaxHighlighter()
extern "C"
void C_ZN18QSyntaxHighlighterD2Ev(void *this_) {
  delete (QSyntaxHighlighter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:69
// [-2] void setDocument(class QTextDocument *)
extern "C"
void C_ZN18QSyntaxHighlighter11setDocumentEP13QTextDocument(void *this_, QTextDocument * doc) {
  ((QSyntaxHighlighter*)this_)->setDocument(doc);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:70
// [8] QTextDocument * document()
extern "C"
void* C_ZNK18QSyntaxHighlighter8documentEv(void *this_) {
  return (void*)((QSyntaxHighlighter*)this_)->document();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:73
// [-2] void rehighlight()
extern "C"
void C_ZN18QSyntaxHighlighter11rehighlightEv(void *this_) {
  ((QSyntaxHighlighter*)this_)->rehighlight();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsyntaxhighlighter.h:74
// [-2] void rehighlightBlock(const class QTextBlock &)
extern "C"
void C_ZN18QSyntaxHighlighter16rehighlightBlockERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QSyntaxHighlighter*)this_)->rehighlightBlock(*block);
}
//  main block end
