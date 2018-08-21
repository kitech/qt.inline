//  header block begin
// /usr/include/qt/QtGui/qtextdocument.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextdocument.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextDocument is pure virtual: false
// QTextDocument has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextDocument : public QTextDocument {
public:
  virtual ~MyQTextDocument() {}
// void QTextDocument(QObject *)
MyQTextDocument(QObject * parent) : QTextDocument(parent) {}
// void QTextDocument(const QString &, QObject *)
MyQTextDocument(const QString & text, QObject * parent) : QTextDocument(text, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [8] QTextObject * createObject(const QTextFormat &)
  virtual QTextObject * createObject(const QTextFormat & f) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createObject", &handled, 1, (uint64_t)&f, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QTextObject *)(irv);
      // Pointer Pointer QTextObject *
    } else {
    return QTextDocument::createObject(f);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [16] QVariant loadResource(int, const QUrl &)
  virtual QVariant loadResource(int type_, const QUrl & name) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"loadResource", &handled, 2, (uint64_t)type_, (uint64_t)&name, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return QTextDocument::loadResource(type_, name);
  }
  }

// void QTextDocument(QTextDocumentPrivate &, QObject *)
MyQTextDocument(QTextDocumentPrivate & dd, QObject * parent) : QTextDocument(dd, parent) {}
};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:292
// [8] QTextObject * createObject(const QTextFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QTextDocument12createObjectERK11QTextFormat(void *this_, QTextFormat* f) {
  return (void*)((QTextDocument*)this_)->QTextDocument::createObject(*f);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:293
// [16] QVariant loadResource(int, const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QTextDocument12loadResourceEiRK4QUrl(void *this_, int type_, QUrl* name) {
  auto rv = ((QTextDocument*)this_)->QTextDocument::loadResource(type_, *name);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:99
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument10metaObjectEv(void *this_) {
  return (void*)((QTextDocument*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:99
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QTextDocument11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTextDocument*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:99
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QTextDocument11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTextDocument*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:99
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QTextDocument2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextDocument::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:99
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QTextDocument6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextDocument::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:119
// [-2] void QTextDocument(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QTextDocumentC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQTextDocument*)(0);
  return  new MyQTextDocument(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:120
// [-2] void QTextDocument(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QTextDocumentC2ERK7QStringP7QObject(QString* text, QObject * parent) {
  auto _nilp = (MyQTextDocument*)(0);
  return  new MyQTextDocument(*text, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:121
// [-2] void ~QTextDocument()
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocumentD2Ev(void *this_) {
  delete (QTextDocument*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:123
// [8] QTextDocument * clone(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument5cloneEP7QObject(void *this_, QObject * parent) {
  return (void*)((QTextDocument*)this_)->clone(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:125
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QTextDocument7isEmptyEv(void *this_) {
  return (bool)((QTextDocument*)this_)->isEmpty();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:126
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument5clearEv(void *this_) {
  ((QTextDocument*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:128
// [-2] void setUndoRedoEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument18setUndoRedoEnabledEb(void *this_, bool enable) {
  ((QTextDocument*)this_)->setUndoRedoEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:129
// [1] bool isUndoRedoEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QTextDocument17isUndoRedoEnabledEv(void *this_) {
  return (bool)((QTextDocument*)this_)->isUndoRedoEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:131
// [1] bool isUndoAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QTextDocument15isUndoAvailableEv(void *this_) {
  return (bool)((QTextDocument*)this_)->isUndoAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:132
// [1] bool isRedoAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QTextDocument15isRedoAvailableEv(void *this_) {
  return (bool)((QTextDocument*)this_)->isRedoAvailable();
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qtextdocument.h:134
// [4] int availableUndoSteps()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
int C_ZNK13QTextDocument18availableUndoStepsEv(void *this_) {
  return (int)((QTextDocument*)this_)->availableUndoSteps();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qtextdocument.h:135
// [4] int availableRedoSteps()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
int C_ZNK13QTextDocument18availableRedoStepsEv(void *this_) {
  return (int)((QTextDocument*)this_)->availableRedoSteps();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextdocument.h:137
// [4] int revision()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
int C_ZNK13QTextDocument8revisionEv(void *this_) {
  return (int)((QTextDocument*)this_)->revision();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:139
// [-2] void setDocumentLayout(QAbstractTextDocumentLayout *)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument17setDocumentLayoutEP27QAbstractTextDocumentLayout(void *this_, QAbstractTextDocumentLayout * layout) {
  ((QTextDocument*)this_)->setDocumentLayout(layout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:140
// [8] QAbstractTextDocumentLayout * documentLayout()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument14documentLayoutEv(void *this_) {
  return (void*)((QTextDocument*)this_)->documentLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:146
// [-2] void setMetaInformation(QTextDocument::MetaInformation, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument18setMetaInformationENS_15MetaInformationERK7QString(void *this_, QTextDocument::MetaInformation info, QString* arg1) {
  ((QTextDocument*)this_)->setMetaInformation(info, *arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:147
// [8] QString metaInformation(QTextDocument::MetaInformation)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument15metaInformationENS_15MetaInformationE(void *this_, QTextDocument::MetaInformation info) {
  auto rv = ((QTextDocument*)this_)->metaInformation(info);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:150
// [8] QString toHtml(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument6toHtmlERK10QByteArray(void *this_, QByteArray* encoding) {
  auto rv = ((QTextDocument*)this_)->toHtml(*encoding);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:151
// [-2] void setHtml(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument7setHtmlERK7QString(void *this_, QString* html) {
  ((QTextDocument*)this_)->setHtml(*html);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtGui/qtextdocument.h:154
// [8] QString toRawText()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument9toRawTextEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->toRawText();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:155
// [8] QString toPlainText()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument11toPlainTextEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->toPlainText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:156
// [-2] void setPlainText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument12setPlainTextERK7QString(void *this_, QString* text) {
  ((QTextDocument*)this_)->setPlainText(*text);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextdocument.h:158
// [2] QChar characterAt(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument11characterAtEi(void *this_, int pos) {
  auto rv = ((QTextDocument*)this_)->characterAt(pos);
return new QChar(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:168
// [8] QTextCursor find(const QString &, int, QTextDocument::FindFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument4findERK7QStringi6QFlagsINS_8FindFlagEE(void *this_, QString* subString, int from, QFlags<QTextDocument::FindFlag> options) {
  auto rv = ((QTextDocument*)this_)->find(*subString, from, options);
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:169
// [8] QTextCursor find(const QString &, const QTextCursor &, QTextDocument::FindFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument4findERK7QStringRK11QTextCursor6QFlagsINS_8FindFlagEE(void *this_, QString* subString, QTextCursor* cursor, QFlags<QTextDocument::FindFlag> options) {
  auto rv = ((QTextDocument*)this_)->find(*subString, *cursor, options);
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:172
// [8] QTextCursor find(const QRegExp &, int, QTextDocument::FindFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument4findERK7QRegExpi6QFlagsINS_8FindFlagEE(void *this_, QRegExp* expr, int from, QFlags<QTextDocument::FindFlag> options) {
  auto rv = ((QTextDocument*)this_)->find(*expr, from, options);
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:173
// [8] QTextCursor find(const QRegExp &, const QTextCursor &, QTextDocument::FindFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument4findERK7QRegExpRK11QTextCursor6QFlagsINS_8FindFlagEE(void *this_, QRegExp* expr, QTextCursor* cursor, QFlags<QTextDocument::FindFlag> options) {
  auto rv = ((QTextDocument*)this_)->find(*expr, *cursor, options);
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:177
// [8] QTextCursor find(const QRegularExpression &, int, QTextDocument::FindFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument4findERK18QRegularExpressioni6QFlagsINS_8FindFlagEE(void *this_, QRegularExpression* expr, int from, QFlags<QTextDocument::FindFlag> options) {
  auto rv = ((QTextDocument*)this_)->find(*expr, from, options);
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:178
// [8] QTextCursor find(const QRegularExpression &, const QTextCursor &, QTextDocument::FindFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument4findERK18QRegularExpressionRK11QTextCursor6QFlagsINS_8FindFlagEE(void *this_, QRegularExpression* expr, QTextCursor* cursor, QFlags<QTextDocument::FindFlag> options) {
  auto rv = ((QTextDocument*)this_)->find(*expr, *cursor, options);
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:181
// [8] QTextFrame * frameAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument7frameAtEi(void *this_, int pos) {
  return (void*)((QTextDocument*)this_)->frameAt(pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:182
// [8] QTextFrame * rootFrame()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument9rootFrameEv(void *this_) {
  return (void*)((QTextDocument*)this_)->rootFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:184
// [8] QTextObject * object(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument6objectEi(void *this_, int objectIndex) {
  return (void*)((QTextDocument*)this_)->object(objectIndex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:185
// [8] QTextObject * objectForFormat(const QTextFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument15objectForFormatERK11QTextFormat(void *this_, QTextFormat* arg0) {
  return (void*)((QTextDocument*)this_)->objectForFormat(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:187
// [16] QTextBlock findBlock(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument9findBlockEi(void *this_, int pos) {
  auto rv = ((QTextDocument*)this_)->findBlock(pos);
return new QTextBlock(rv);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextdocument.h:188
// [16] QTextBlock findBlockByNumber(int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument17findBlockByNumberEi(void *this_, int blockNumber) {
  auto rv = ((QTextDocument*)this_)->findBlockByNumber(blockNumber);
return new QTextBlock(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextdocument.h:189
// [16] QTextBlock findBlockByLineNumber(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument21findBlockByLineNumberEi(void *this_, int blockNumber) {
  auto rv = ((QTextDocument*)this_)->findBlockByLineNumber(blockNumber);
return new QTextBlock(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:190
// [16] QTextBlock begin()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument5beginEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->begin();
return new QTextBlock(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:191
// [16] QTextBlock end()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument3endEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->end();
return new QTextBlock(rv);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextdocument.h:193
// [16] QTextBlock firstBlock()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument10firstBlockEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->firstBlock();
return new QTextBlock(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextdocument.h:194
// [16] QTextBlock lastBlock()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument9lastBlockEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->lastBlock();
return new QTextBlock(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:196
// [-2] void setPageSize(const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument11setPageSizeERK6QSizeF(void *this_, QSizeF* size) {
  ((QTextDocument*)this_)->setPageSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:197
// [16] QSizeF pageSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument8pageSizeEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->pageSize();
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:199
// [-2] void setDefaultFont(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument14setDefaultFontERK5QFont(void *this_, QFont* font) {
  ((QTextDocument*)this_)->setDefaultFont(*font);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:200
// [16] QFont defaultFont()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument11defaultFontEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->defaultFont();
return new QFont(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:202
// [4] int pageCount()
extern "C" Q_DECL_EXPORT
int C_ZNK13QTextDocument9pageCountEv(void *this_) {
  return (int)((QTextDocument*)this_)->pageCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:204
// [1] bool isModified()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QTextDocument10isModifiedEv(void *this_) {
  return (bool)((QTextDocument*)this_)->isModified();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:206
// [-2] void print(QPagedPaintDevice *)
extern "C" Q_DECL_EXPORT
void C_ZNK13QTextDocument5printEP17QPagedPaintDevice(void *this_, QPagedPaintDevice * printer) {
  ((QTextDocument*)this_)->print(printer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:216
// [16] QVariant resource(int, const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument8resourceEiRK4QUrl(void *this_, int type_, QUrl* name) {
  auto rv = ((QTextDocument*)this_)->resource(type_, *name);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:217
// [-2] void addResource(int, const QUrl &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument11addResourceEiRK4QUrlRK8QVariant(void *this_, int type_, QUrl* name, QVariant* resource) {
  ((QTextDocument*)this_)->addResource(type_, *name, *resource);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:219
// [-2] QVector<QTextFormat> allFormats()
extern "C" Q_DECL_EXPORT
void C_ZNK13QTextDocument10allFormatsEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->allFormats();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:221
// [-2] void markContentsDirty(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument17markContentsDirtyEii(void *this_, int from, int length) {
  ((QTextDocument*)this_)->markContentsDirty(from, length);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:223
// [-2] void setUseDesignMetrics(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument19setUseDesignMetricsEb(void *this_, bool b) {
  ((QTextDocument*)this_)->setUseDesignMetrics(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:224
// [1] bool useDesignMetrics()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QTextDocument16useDesignMetricsEv(void *this_) {
  return (bool)((QTextDocument*)this_)->useDesignMetrics();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextdocument.h:226
// [-2] void drawContents(QPainter *, const QRectF &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument12drawContentsEP8QPainterRK6QRectF(void *this_, QPainter * painter, QRectF* rect) {
  ((QTextDocument*)this_)->drawContents(painter, *rect);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:228
// [-2] void setTextWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument12setTextWidthEd(void *this_, qreal width) {
  ((QTextDocument*)this_)->setTextWidth(width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:229
// [8] qreal textWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QTextDocument9textWidthEv(void *this_) {
  return (qreal)((QTextDocument*)this_)->textWidth();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextdocument.h:231
// [8] qreal idealWidth()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QTextDocument10idealWidthEv(void *this_) {
  return (qreal)((QTextDocument*)this_)->idealWidth();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:233
// [8] qreal indentWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QTextDocument11indentWidthEv(void *this_) {
  return (qreal)((QTextDocument*)this_)->indentWidth();
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextdocument.h:234
// [-2] void setIndentWidth(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument14setIndentWidthEd(void *this_, qreal width) {
  ((QTextDocument*)this_)->setIndentWidth(width);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:236
// [8] qreal documentMargin()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QTextDocument14documentMarginEv(void *this_) {
  return (qreal)((QTextDocument*)this_)->documentMargin();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:237
// [-2] void setDocumentMargin(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument17setDocumentMarginEd(void *this_, qreal margin) {
  ((QTextDocument*)this_)->setDocumentMargin(margin);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextdocument.h:239
// [-2] void adjustSize()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument10adjustSizeEv(void *this_) {
  ((QTextDocument*)this_)->adjustSize();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:240
// [16] QSizeF size()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument4sizeEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->size();
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:242
// [4] int blockCount()
extern "C" Q_DECL_EXPORT
int C_ZNK13QTextDocument10blockCountEv(void *this_) {
  return (int)((QTextDocument*)this_)->blockCount();
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextdocument.h:243
// [4] int lineCount()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK13QTextDocument9lineCountEv(void *this_) {
  return (int)((QTextDocument*)this_)->lineCount();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextdocument.h:244
// [4] int characterCount()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK13QTextDocument14characterCountEv(void *this_) {
  return (int)((QTextDocument*)this_)->characterCount();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:247
// [-2] void setDefaultStyleSheet(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument20setDefaultStyleSheetERK7QString(void *this_, QString* sheet) {
  ((QTextDocument*)this_)->setDefaultStyleSheet(*sheet);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:248
// [8] QString defaultStyleSheet()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument17defaultStyleSheetEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->defaultStyleSheet();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextdocument.h:251
// [-2] void undo(QTextCursor *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument4undoEP11QTextCursor(void *this_, QTextCursor * cursor) {
  ((QTextDocument*)this_)->undo(cursor);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextdocument.h:252
// [-2] void redo(QTextCursor *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument4redoEP11QTextCursor(void *this_, QTextCursor * cursor) {
  ((QTextDocument*)this_)->redo(cursor);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:259
// [-2] void clearUndoRedoStacks(QTextDocument::Stacks)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument19clearUndoRedoStacksENS_6StacksE(void *this_, QTextDocument::Stacks historyToClear) {
  ((QTextDocument*)this_)->clearUndoRedoStacks(historyToClear);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:261
// [4] int maximumBlockCount()
extern "C" Q_DECL_EXPORT
int C_ZNK13QTextDocument17maximumBlockCountEv(void *this_) {
  return (int)((QTextDocument*)this_)->maximumBlockCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:262
// [-2] void setMaximumBlockCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument20setMaximumBlockCountEi(void *this_, int maximum) {
  ((QTextDocument*)this_)->setMaximumBlockCount(maximum);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextdocument.h:264
// [32] QTextOption defaultTextOption()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument17defaultTextOptionEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->defaultTextOption();
return new QTextOption(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextdocument.h:265
// [-2] void setDefaultTextOption(const QTextOption &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument20setDefaultTextOptionERK11QTextOption(void *this_, QTextOption* option) {
  ((QTextDocument*)this_)->setDefaultTextOption(*option);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:267
// [8] QUrl baseUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument7baseUrlEv(void *this_) {
  auto rv = ((QTextDocument*)this_)->baseUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:268
// [-2] void setBaseUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument10setBaseUrlERK4QUrl(void *this_, QUrl* url) {
  ((QTextDocument*)this_)->setBaseUrl(*url);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextdocument.h:270
// [4] Qt::CursorMoveStyle defaultCursorMoveStyle()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
Qt::CursorMoveStyle C_ZNK13QTextDocument22defaultCursorMoveStyleEv(void *this_) {
  return (Qt::CursorMoveStyle)((QTextDocument*)this_)->defaultCursorMoveStyle();
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextdocument.h:271
// [-2] void setDefaultCursorMoveStyle(Qt::CursorMoveStyle)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument25setDefaultCursorMoveStyleEN2Qt15CursorMoveStyleE(void *this_, Qt::CursorMoveStyle style) {
  ((QTextDocument*)this_)->setDefaultCursorMoveStyle(style);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:274
// [-2] void contentsChange(int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument14contentsChangeEiii(void *this_, int from, int charsRemoved, int charsAdded) {
  ((QTextDocument*)this_)->contentsChange(from, charsRemoved, charsAdded);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:275
// [-2] void contentsChanged()
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument15contentsChangedEv(void *this_) {
  ((QTextDocument*)this_)->contentsChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:276
// [-2] void undoAvailable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument13undoAvailableEb(void *this_, bool arg0) {
  ((QTextDocument*)this_)->undoAvailable(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:277
// [-2] void redoAvailable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument13redoAvailableEb(void *this_, bool arg0) {
  ((QTextDocument*)this_)->redoAvailable(arg0);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextdocument.h:278
// [-2] void undoCommandAdded()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument16undoCommandAddedEv(void *this_) {
  ((QTextDocument*)this_)->undoCommandAdded();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:279
// [-2] void modificationChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument19modificationChangedEb(void *this_, bool m) {
  ((QTextDocument*)this_)->modificationChanged(m);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:280
// [-2] void cursorPositionChanged(const QTextCursor &)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(void *this_, QTextCursor* cursor) {
  ((QTextDocument*)this_)->cursorPositionChanged(*cursor);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextdocument.h:281
// [-2] void blockCountChanged(int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument17blockCountChangedEi(void *this_, int newBlockCount) {
  ((QTextDocument*)this_)->blockCountChanged(newBlockCount);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:282
// [-2] void baseUrlChanged(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument14baseUrlChangedERK4QUrl(void *this_, QUrl* url) {
  ((QTextDocument*)this_)->baseUrlChanged(*url);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextdocument.h:283
// [-2] void documentLayoutChanged()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument21documentLayoutChangedEv(void *this_) {
  ((QTextDocument*)this_)->documentLayoutChanged();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:286
// [-2] void undo()
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument4undoEv(void *this_) {
  ((QTextDocument*)this_)->undo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:287
// [-2] void redo()
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument4redoEv(void *this_) {
  ((QTextDocument*)this_)->redo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:288
// [-2] void appendUndoItem(QAbstractUndoItem *)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument14appendUndoItemEP17QAbstractUndoItem(void *this_, QAbstractUndoItem * arg0) {
  ((QTextDocument*)this_)->appendUndoItem(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:289
// [-2] void setModified(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QTextDocument11setModifiedEb(void *this_, bool m) {
  ((QTextDocument*)this_)->setModified(m);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:297
// [8] QTextDocumentPrivate * docHandle()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTextDocument9docHandleEv(void *this_) {
  return (void*)((QTextDocument*)this_)->docHandle();
}

//  main block end
