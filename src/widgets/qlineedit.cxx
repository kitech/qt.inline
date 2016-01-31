// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qlineedit.h
// dst-file: /src/widgets/qlineedit.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qlineedit.h>


#include <qvariant.h>
#include <qnamespace.h>
#include <qsize.h>
#include <qstring.h>
#include <qmargins.h>
// <= header block end

// main block begin =>
void __keep_qlineedit_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QLineEdit_Class_Size()
{
  return sizeof(QLineEdit);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 136, column 10>
//   // proto:  void QLineEdit::cursorBackward(bool mark, int steps);
// _ZN9QLineEdit14cursorBackwardEbi cursorBackward(_Bool, int)
extern "C"
void
C_ZN9QLineEdit14cursorBackwardEbi(void *qthis,
bool arg1,
int arg2) {
  ((QLineEdit*)qthis)->cursorBackward(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 141, column 10>
//   // proto:  void QLineEdit::home(bool mark);
// _ZN9QLineEdit4homeEb home(_Bool)
extern "C"
void
C_ZN9QLineEdit4homeEb(void *qthis,
bool arg1) {
  ((QLineEdit*)qthis)->home(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 150, column 9>
//   // proto:  int QLineEdit::selectionStart();
// _ZNK9QLineEdit14selectionStartEv selectionStart()
extern "C"
int
C_ZNK9QLineEdit14selectionStartEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->selectionStart();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 129, column 10>
//   // proto:  void QLineEdit::setCursorPosition(int );
// _ZN9QLineEdit17setCursorPositionEi setCursorPosition(int)
extern "C"
void
C_ZN9QLineEdit17setCursorPositionEi(void *qthis,
int arg1) {
  ((QLineEdit*)qthis)->setCursorPosition(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 153, column 10>
//   // proto:  bool QLineEdit::isRedoAvailable();
// _ZNK9QLineEdit15isRedoAvailableEv isRedoAvailable()
extern "C"
bool
C_ZNK9QLineEdit15isRedoAvailableEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->isRedoAvailable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 145, column 10>
//   // proto:  void QLineEdit::setModified(bool );
// _ZN9QLineEdit11setModifiedEb setModified(_Bool)
extern "C"
void
C_ZN9QLineEdit11setModifiedEb(void *qthis,
bool arg1) {
  ((QLineEdit*)qthis)->setModified(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 88, column 14>
//   // proto:  void QLineEdit::QLineEdit(const QString & , QWidget * parent);
extern "C"
QLineEdit*
C_ZN9QLineEditC2ERK7QStringP7QWidget(const QString* arg1,
QWidget * arg2) {
  auto ret = new QLineEdit(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 225, column 10>
//   // proto:  bool QLineEdit::event(QEvent * );
// _ZN9QLineEdit5eventEP6QEvent event(class QEvent *)
extern "C"
bool
C_ZN9QLineEdit5eventEP6QEvent(void *qthis,
QEvent * arg1) {
  auto ret =
  ((QLineEdit*)qthis)->event(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 98, column 9>
//   // proto:  int QLineEdit::maxLength();
// _ZNK9QLineEdit9maxLengthEv maxLength()
extern "C"
int
C_ZNK9QLineEdit9maxLengthEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->maxLength();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 158, column 10>
//   // proto:  void QLineEdit::setCursorMoveStyle(Qt::CursorMoveStyle style);
// _ZN9QLineEdit18setCursorMoveStyleEN2Qt15CursorMoveStyleE setCursorMoveStyle(Qt::CursorMoveStyle)
extern "C"
void
C_ZN9QLineEdit18setCursorMoveStyleEN2Qt15CursorMoveStyleE(void *qthis,
Qt::CursorMoveStyle* arg1) {
  ((QLineEdit*)qthis)->setCursorMoveStyle(*((Qt::CursorMoveStyle*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 190, column 12>
//   // proto:  QMenu * QLineEdit::createStandardContextMenu();
// _ZN9QLineEdit25createStandardContextMenuEv createStandardContextMenu()
extern "C"
void*
C_ZN9QLineEdit25createStandardContextMenuEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->createStandardContextMenu();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 166, column 10>
//   // proto:  void QLineEdit::setTextMargins(const QMargins & margins);
// _ZN9QLineEdit14setTextMarginsERK8QMargins setTextMargins(const class QMargins &)
extern "C"
void
C_ZN9QLineEdit14setTextMarginsERK8QMargins(void *qthis,
const QMargins* arg1) {
  ((QLineEdit*)qthis)->setTextMargins(*((const QMargins*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 130, column 9>
//   // proto:  int QLineEdit::cursorPositionAt(const QPoint & pos);
// _ZN9QLineEdit16cursorPositionAtERK6QPoint cursorPositionAt(const class QPoint &)
extern "C"
int
C_ZN9QLineEdit16cursorPositionAtERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QLineEdit*)qthis)->cursorPositionAt(*((const QPoint*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 148, column 10>
//   // proto:  bool QLineEdit::hasSelectedText();
// _ZNK9QLineEdit15hasSelectedTextEv hasSelectedText()
extern "C"
bool
C_ZNK9QLineEdit15hasSelectedTextEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->hasSelectedText();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 224, column 14>
//   // proto:  QVariant QLineEdit::inputMethodQuery(Qt::InputMethodQuery );
// _ZNK9QLineEdit16inputMethodQueryEN2Qt16InputMethodQueryE inputMethodQuery(Qt::InputMethodQuery)
extern "C"
QVariant*
C_ZNK9QLineEdit16inputMethodQueryEN2Qt16InputMethodQueryE(void *qthis,
Qt::InputMethodQuery* arg1) {
  auto ret =
  ((QLineEdit*)qthis)->inputMethodQuery(*((Qt::InputMethodQuery*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 96, column 10>
//   // proto:  void QLineEdit::setPlaceholderText(const QString & );
// _ZN9QLineEdit18setPlaceholderTextERK7QString setPlaceholderText(const class QString &)
extern "C"
void
C_ZN9QLineEdit18setPlaceholderTextERK7QString(void *qthis,
const QString* arg1) {
  ((QLineEdit*)qthis)->setPlaceholderText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 132, column 10>
//   // proto:  void QLineEdit::setAlignment(Qt::Alignment flag);
// _ZN9QLineEdit12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE setAlignment(Qt::Alignment)
extern "C"
void
C_ZN9QLineEdit12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
Qt::Alignment* arg1) {
  ((QLineEdit*)qthis)->setAlignment(*((Qt::Alignment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 159, column 25>
//   // proto:  Qt::CursorMoveStyle QLineEdit::cursorMoveStyle();
// _ZNK9QLineEdit15cursorMoveStyleEv cursorMoveStyle()
extern "C"
Qt::CursorMoveStyle
C_ZNK9QLineEdit15cursorMoveStyleEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->cursorMoveStyle();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 126, column 11>
//   // proto:  QSize QLineEdit::minimumSizeHint();
// _ZNK9QLineEdit15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK9QLineEdit15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 135, column 10>
//   // proto:  void QLineEdit::cursorForward(bool mark, int steps);
// _ZN9QLineEdit13cursorForwardEbi cursorForward(_Bool, int)
extern "C"
void
C_ZN9QLineEdit13cursorForwardEbi(void *qthis,
bool arg1,
int arg2) {
  ((QLineEdit*)qthis)->cursorForward(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 188, column 10>
//   // proto:  void QLineEdit::insert(const QString & );
// _ZN9QLineEdit6insertERK7QString insert(const class QString &)
extern "C"
void
C_ZN9QLineEdit6insertERK7QString(void *qthis,
const QString* arg1) {
  ((QLineEdit*)qthis)->insert(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 175, column 10>
//   // proto:  void QLineEdit::setText(const QString & );
// _ZN9QLineEdit7setTextERK7QString setText(const class QString &)
extern "C"
void
C_ZN9QLineEdit7setTextERK7QString(void *qthis,
const QString* arg1) {
  ((QLineEdit*)qthis)->setText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 199, column 10>
//   // proto:  void QLineEdit::selectionChanged();
// _ZN9QLineEdit16selectionChangedEv selectionChanged()
extern "C"
void
C_ZN9QLineEdit16selectionChangedEv(void *qthis) {
  ((QLineEdit*)qthis)->selectionChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 117, column 24>
//   // proto:  const QValidator * QLineEdit::validator();
// _ZNK9QLineEdit9validatorEv validator()
extern "C"
void*
C_ZNK9QLineEdit9validatorEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->validator();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 187, column 10>
//   // proto:  void QLineEdit::deselect();
// _ZN9QLineEdit8deselectEv deselect()
extern "C"
void
C_ZN9QLineEdit8deselectEv(void *qthis) {
  ((QLineEdit*)qthis)->deselect();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 197, column 10>
//   // proto:  void QLineEdit::returnPressed();
// _ZN9QLineEdit13returnPressedEv returnPressed()
extern "C"
void
C_ZN9QLineEdit13returnPressedEv(void *qthis) {
  ((QLineEdit*)qthis)->returnPressed();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 161, column 13>
//   // proto:  QString QLineEdit::inputMask();
// _ZNK9QLineEdit9inputMaskEv inputMask()
extern "C"
QString*
C_ZNK9QLineEdit9inputMaskEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->inputMask();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 95, column 13>
//   // proto:  QString QLineEdit::placeholderText();
// _ZNK9QLineEdit15placeholderTextEv placeholderText()
extern "C"
QString*
C_ZNK9QLineEdit15placeholderTextEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->placeholderText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 181, column 10>
//   // proto:  void QLineEdit::cut();
// _ZN9QLineEdit3cutEv cut()
extern "C"
void
C_ZN9QLineEdit3cutEv(void *qthis) {
  ((QLineEdit*)qthis)->cut();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 133, column 19>
//   // proto:  Qt::Alignment QLineEdit::alignment();
// _ZNK9QLineEdit9alignmentEv alignment()
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK9QLineEdit9alignmentEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->alignment();
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 171, column 10>
//   // proto:  void QLineEdit::addAction(QAction * action, QLineEdit::ActionPosition position);
// _ZN9QLineEdit9addActionEP7QActionNS_14ActionPositionE addAction(class QAction *, enum QLineEdit::ActionPosition)
extern "C"
void
C_ZN9QLineEdit9addActionEP7QActionNS_14ActionPositionE(void *qthis,
QAction * arg1,
QLineEdit::ActionPosition arg2) {
  ((QLineEdit*)qthis)->addAction(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 91, column 13>
//   // proto:  QString QLineEdit::text();
// _ZNK9QLineEdit4textEv text()
extern "C"
QString*
C_ZNK9QLineEdit4textEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 59, column 5>
//   // proto:  const QMetaObject * QLineEdit::metaObject();
// _ZNK9QLineEdit10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QLineEdit10metaObjectEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 140, column 10>
//   // proto:  void QLineEdit::del();
// _ZN9QLineEdit3delEv del()
extern "C"
void
C_ZN9QLineEdit3delEv(void *qthis) {
  ((QLineEdit*)qthis)->del();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 144, column 10>
//   // proto:  bool QLineEdit::isModified();
// _ZNK9QLineEdit10isModifiedEv isModified()
extern "C"
bool
C_ZNK9QLineEdit10isModifiedEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->isModified();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 198, column 10>
//   // proto:  void QLineEdit::editingFinished();
// _ZN9QLineEdit15editingFinishedEv editingFinished()
extern "C"
void
C_ZN9QLineEdit15editingFinishedEv(void *qthis) {
  ((QLineEdit*)qthis)->editingFinished();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 137, column 10>
//   // proto:  void QLineEdit::cursorWordForward(bool mark);
// _ZN9QLineEdit17cursorWordForwardEb cursorWordForward(_Bool)
extern "C"
void
C_ZN9QLineEdit17cursorWordForwardEb(void *qthis,
bool arg1) {
  ((QLineEdit*)qthis)->cursorWordForward(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 110, column 10>
//   // proto:  void QLineEdit::setEchoMode(QLineEdit::EchoMode );
// _ZN9QLineEdit11setEchoModeENS_8EchoModeE setEchoMode(enum QLineEdit::EchoMode)
extern "C"
void
C_ZN9QLineEdit11setEchoModeENS_8EchoModeE(void *qthis,
QLineEdit::EchoMode arg1) {
  ((QLineEdit*)qthis)->setEchoMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 177, column 10>
//   // proto:  void QLineEdit::selectAll();
// _ZN9QLineEdit9selectAllEv selectAll()
extern "C"
void
C_ZN9QLineEdit9selectAllEv(void *qthis) {
  ((QLineEdit*)qthis)->selectAll();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 147, column 10>
//   // proto:  void QLineEdit::setSelection(int , int );
// _ZN9QLineEdit12setSelectionEii setSelection(int, int)
extern "C"
void
C_ZN9QLineEdit12setSelectionEii(void *qthis,
int arg1,
int arg2) {
  ((QLineEdit*)qthis)->setSelection(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 121, column 10>
//   // proto:  void QLineEdit::setCompleter(QCompleter * completer);
// _ZN9QLineEdit12setCompleterEP10QCompleter setCompleter(class QCompleter *)
extern "C"
void
C_ZN9QLineEdit12setCompleterEP10QCompleter(void *qthis,
QCompleter * arg1) {
  ((QLineEdit*)qthis)->setCompleter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 99, column 10>
//   // proto:  void QLineEdit::setMaxLength(int );
// _ZN9QLineEdit12setMaxLengthEi setMaxLength(int)
extern "C"
void
C_ZN9QLineEdit12setMaxLengthEi(void *qthis,
int arg1) {
  ((QLineEdit*)qthis)->setMaxLength(arg1);
}
//   // proto:  void QLineEdit::~QLineEdit();
extern "C"
void C_ZN9QLineEditD2Ev(void *qthis) {
  delete (QLineEdit*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 195, column 10>
//   // proto:  void QLineEdit::textEdited(const QString & );
// _ZN9QLineEdit10textEditedERK7QString textEdited(const class QString &)
extern "C"
void
C_ZN9QLineEdit10textEditedERK7QString(void *qthis,
const QString* arg1) {
  ((QLineEdit*)qthis)->textEdited(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 113, column 10>
//   // proto:  void QLineEdit::setReadOnly(bool );
// _ZN9QLineEdit11setReadOnlyEb setReadOnly(_Bool)
extern "C"
void
C_ZN9QLineEdit11setReadOnlyEb(void *qthis,
bool arg1) {
  ((QLineEdit*)qthis)->setReadOnly(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 93, column 13>
//   // proto:  QString QLineEdit::displayText();
// _ZNK9QLineEdit11displayTextEv displayText()
extern "C"
QString*
C_ZNK9QLineEdit11displayTextEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->displayText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 101, column 10>
//   // proto:  void QLineEdit::setFrame(bool );
// _ZN9QLineEdit8setFrameEb setFrame(_Bool)
extern "C"
void
C_ZN9QLineEdit8setFrameEb(void *qthis,
bool arg1) {
  ((QLineEdit*)qthis)->setFrame(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 163, column 10>
//   // proto:  bool QLineEdit::hasAcceptableInput();
// _ZNK9QLineEdit18hasAcceptableInputEv hasAcceptableInput()
extern "C"
bool
C_ZNK9QLineEdit18hasAcceptableInputEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->hasAcceptableInput();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 102, column 10>
//   // proto:  bool QLineEdit::hasFrame();
// _ZNK9QLineEdit8hasFrameEv hasFrame()
extern "C"
bool
C_ZNK9QLineEdit8hasFrameEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->hasFrame();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 128, column 9>
//   // proto:  int QLineEdit::cursorPosition();
// _ZNK9QLineEdit14cursorPositionEv cursorPosition()
extern "C"
int
C_ZNK9QLineEdit14cursorPositionEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->cursorPosition();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 138, column 10>
//   // proto:  void QLineEdit::cursorWordBackward(bool mark);
// _ZN9QLineEdit18cursorWordBackwardEb cursorWordBackward(_Bool)
extern "C"
void
C_ZN9QLineEdit18cursorWordBackwardEb(void *qthis,
bool arg1) {
  ((QLineEdit*)qthis)->cursorWordBackward(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 156, column 10>
//   // proto:  bool QLineEdit::dragEnabled();
// _ZNK9QLineEdit11dragEnabledEv dragEnabled()
extern "C"
bool
C_ZNK9QLineEdit11dragEnabledEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->dragEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 194, column 10>
//   // proto:  void QLineEdit::textChanged(const QString & );
// _ZN9QLineEdit11textChangedERK7QString textChanged(const class QString &)
extern "C"
void
C_ZN9QLineEdit11textChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QLineEdit*)qthis)->textChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 125, column 11>
//   // proto:  QSize QLineEdit::sizeHint();
// _ZNK9QLineEdit8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK9QLineEdit8sizeHintEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 183, column 10>
//   // proto:  void QLineEdit::paste();
// _ZN9QLineEdit5pasteEv paste()
extern "C"
void
C_ZN9QLineEdit5pasteEv(void *qthis) {
  ((QLineEdit*)qthis)->paste();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 116, column 10>
//   // proto:  void QLineEdit::setValidator(const QValidator * );
// _ZN9QLineEdit12setValidatorEPK10QValidator setValidator(const class QValidator *)
extern "C"
void
C_ZN9QLineEdit12setValidatorEPK10QValidator(void *qthis,
const QValidator * arg1) {
  ((QLineEdit*)qthis)->setValidator(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 87, column 14>
//   // proto:  void QLineEdit::QLineEdit(QWidget * parent);
extern "C"
QLineEdit*
C_ZN9QLineEditC2EP7QWidget(QWidget * arg1) {
  auto ret = new QLineEdit(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 122, column 17>
//   // proto:  QCompleter * QLineEdit::completer();
// _ZNK9QLineEdit9completerEv completer()
extern "C"
void*
C_ZNK9QLineEdit9completerEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->completer();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 168, column 14>
//   // proto:  QMargins QLineEdit::textMargins();
// _ZNK9QLineEdit11textMarginsEv textMargins()
extern "C"
QMargins*
C_ZNK9QLineEdit11textMarginsEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->textMargins();
  return new QMargins(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 104, column 10>
//   // proto:  void QLineEdit::setClearButtonEnabled(bool enable);
// _ZN9QLineEdit21setClearButtonEnabledEb setClearButtonEnabled(_Bool)
extern "C"
void
C_ZN9QLineEdit21setClearButtonEnabledEb(void *qthis,
bool arg1) {
  ((QLineEdit*)qthis)->setClearButtonEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 149, column 13>
//   // proto:  QString QLineEdit::selectedText();
// _ZNK9QLineEdit12selectedTextEv selectedText()
extern "C"
QString*
C_ZNK9QLineEdit12selectedTextEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->selectedText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 109, column 14>
//   // proto:  QLineEdit::EchoMode QLineEdit::echoMode();
// _ZNK9QLineEdit8echoModeEv echoMode()
extern "C"
QLineEdit::EchoMode
C_ZNK9QLineEdit8echoModeEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->echoMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 176, column 10>
//   // proto:  void QLineEdit::clear();
// _ZN9QLineEdit5clearEv clear()
extern "C"
void
C_ZN9QLineEdit5clearEv(void *qthis) {
  ((QLineEdit*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 196, column 10>
//   // proto:  void QLineEdit::cursorPositionChanged(int , int );
// _ZN9QLineEdit21cursorPositionChangedEii cursorPositionChanged(int, int)
extern "C"
void
C_ZN9QLineEdit21cursorPositionChangedEii(void *qthis,
int arg1,
int arg2) {
  ((QLineEdit*)qthis)->cursorPositionChanged(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 182, column 10>
//   // proto:  void QLineEdit::copy();
// _ZNK9QLineEdit4copyEv copy()
extern "C"
void
C_ZNK9QLineEdit4copyEv(void *qthis) {
  ((QLineEdit*)qthis)->copy();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 152, column 10>
//   // proto:  bool QLineEdit::isUndoAvailable();
// _ZNK9QLineEdit15isUndoAvailableEv isUndoAvailable()
extern "C"
bool
C_ZNK9QLineEdit15isUndoAvailableEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->isUndoAvailable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 178, column 10>
//   // proto:  void QLineEdit::undo();
// _ZN9QLineEdit4undoEv undo()
extern "C"
void
C_ZN9QLineEdit4undoEv(void *qthis) {
  ((QLineEdit*)qthis)->undo();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 105, column 10>
//   // proto:  bool QLineEdit::isClearButtonEnabled();
// _ZNK9QLineEdit20isClearButtonEnabledEv isClearButtonEnabled()
extern "C"
bool
C_ZNK9QLineEdit20isClearButtonEnabledEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->isClearButtonEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 142, column 10>
//   // proto:  void QLineEdit::end(bool mark);
// _ZN9QLineEdit3endEb end(_Bool)
extern "C"
void
C_ZN9QLineEdit3endEb(void *qthis,
bool arg1) {
  ((QLineEdit*)qthis)->end(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 172, column 14>
//   // proto:  QAction * QLineEdit::addAction(const QIcon & icon, QLineEdit::ActionPosition position);
// _ZN9QLineEdit9addActionERK5QIconNS_14ActionPositionE addAction(const class QIcon &, enum QLineEdit::ActionPosition)
extern "C"
void*
C_ZN9QLineEdit9addActionERK5QIconNS_14ActionPositionE(void *qthis,
const QIcon* arg1,
QLineEdit::ActionPosition arg2) {
  auto ret =
  ((QLineEdit*)qthis)->addAction(*((const QIcon*)arg1),
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 155, column 10>
//   // proto:  void QLineEdit::setDragEnabled(bool b);
// _ZN9QLineEdit14setDragEnabledEb setDragEnabled(_Bool)
extern "C"
void
C_ZN9QLineEdit14setDragEnabledEb(void *qthis,
bool arg1) {
  ((QLineEdit*)qthis)->setDragEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 139, column 10>
//   // proto:  void QLineEdit::backspace();
// _ZN9QLineEdit9backspaceEv backspace()
extern "C"
void
C_ZN9QLineEdit9backspaceEv(void *qthis) {
  ((QLineEdit*)qthis)->backspace();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 179, column 10>
//   // proto:  void QLineEdit::redo();
// _ZN9QLineEdit4redoEv redo()
extern "C"
void
C_ZN9QLineEdit4redoEv(void *qthis) {
  ((QLineEdit*)qthis)->redo();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 165, column 10>
//   // proto:  void QLineEdit::setTextMargins(int left, int top, int right, int bottom);
// _ZN9QLineEdit14setTextMarginsEiiii setTextMargins(int, int, int, int)
extern "C"
void
C_ZN9QLineEdit14setTextMarginsEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QLineEdit*)qthis)->setTextMargins(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 162, column 10>
//   // proto:  void QLineEdit::setInputMask(const QString & inputMask);
// _ZN9QLineEdit12setInputMaskERK7QString setInputMask(const class QString &)
extern "C"
void
C_ZN9QLineEdit12setInputMaskERK7QString(void *qthis,
const QString* arg1) {
  ((QLineEdit*)qthis)->setInputMask(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 167, column 10>
//   // proto:  void QLineEdit::getTextMargins(int * left, int * top, int * right, int * bottom);
// _ZNK9QLineEdit14getTextMarginsEPiS0_S0_S0_ getTextMargins(int *, int *, int *, int *)
extern "C"
void
C_ZNK9QLineEdit14getTextMarginsEPiS0_S0_S0_(void *qthis,
int * arg1,
int * arg2,
int * arg3,
int * arg4) {
  ((QLineEdit*)qthis)->getTextMargins(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlineedit.h', line 112, column 10>
//   // proto:  bool QLineEdit::isReadOnly();
// _ZNK9QLineEdit10isReadOnlyEv isReadOnly()
extern "C"
bool
C_ZNK9QLineEdit10isReadOnlyEv(void *qthis) {
  auto ret =
  ((QLineEdit*)qthis)->isReadOnly();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QLineEdit_SlotProxy here
class QLineEdit_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QLineEdit_SlotProxy():QObject(){}

public slots:
  // textChanged(const class QString &)
  void slot_proxy_func__ZN9QLineEdit11textChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN9QLineEdit11textChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // editingFinished()
  void slot_proxy_func__ZN9QLineEdit15editingFinishedEv();
public:
  void (*slot_func__ZN9QLineEdit15editingFinishedEv)(void* rsfptr) = NULL;
public slots:
  // selectionChanged()
  void slot_proxy_func__ZN9QLineEdit16selectionChangedEv();
public:
  void (*slot_func__ZN9QLineEdit16selectionChangedEv)(void* rsfptr) = NULL;
public slots:
  // cursorPositionChanged(int, int)
  void slot_proxy_func__ZN9QLineEdit21cursorPositionChangedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN9QLineEdit21cursorPositionChangedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public slots:
  // returnPressed()
  void slot_proxy_func__ZN9QLineEdit13returnPressedEv();
public:
  void (*slot_func__ZN9QLineEdit13returnPressedEv)(void* rsfptr) = NULL;
public slots:
  // textEdited(const class QString &)
  void slot_proxy_func__ZN9QLineEdit10textEditedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN9QLineEdit10textEditedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qlineedit.moc"

extern "C" {
  QLineEdit_SlotProxy* QLineEdit_SlotProxy_new()
  {
    return new QLineEdit_SlotProxy();
  }
};

void QLineEdit_SlotProxy::slot_proxy_func__ZN9QLineEdit11textChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN9QLineEdit11textChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN9QLineEdit11textChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QLineEdit_SlotProxy_connect__ZN9QLineEdit11textChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLineEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QLineEdit11textChangedERK7QString = (decltype(that->slot_func__ZN9QLineEdit11textChangedERK7QString))ffifptr;
  QObject::connect((QLineEdit*)sender, SIGNAL(textChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN9QLineEdit11textChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QLineEdit_SlotProxy_disconnect__ZN9QLineEdit11textChangedERK7QString(QLineEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLineEdit_SlotProxy::slot_proxy_func__ZN9QLineEdit15editingFinishedEv() {
  if (this->slot_func__ZN9QLineEdit15editingFinishedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QLineEdit15editingFinishedEv(this->rsfptr);
  }
}
extern "C"
void* QLineEdit_SlotProxy_connect__ZN9QLineEdit15editingFinishedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLineEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QLineEdit15editingFinishedEv = (decltype(that->slot_func__ZN9QLineEdit15editingFinishedEv))ffifptr;
  QObject::connect((QLineEdit*)sender, SIGNAL(editingFinished()), that, SLOT(slot_proxy_func__ZN9QLineEdit15editingFinishedEv()));
  return that;
}
extern "C"
void QLineEdit_SlotProxy_disconnect__ZN9QLineEdit15editingFinishedEv(QLineEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLineEdit_SlotProxy::slot_proxy_func__ZN9QLineEdit16selectionChangedEv() {
  if (this->slot_func__ZN9QLineEdit16selectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QLineEdit16selectionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QLineEdit_SlotProxy_connect__ZN9QLineEdit16selectionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLineEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QLineEdit16selectionChangedEv = (decltype(that->slot_func__ZN9QLineEdit16selectionChangedEv))ffifptr;
  QObject::connect((QLineEdit*)sender, SIGNAL(selectionChanged()), that, SLOT(slot_proxy_func__ZN9QLineEdit16selectionChangedEv()));
  return that;
}
extern "C"
void QLineEdit_SlotProxy_disconnect__ZN9QLineEdit16selectionChangedEv(QLineEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLineEdit_SlotProxy::slot_proxy_func__ZN9QLineEdit21cursorPositionChangedEii(int arg0, int arg1) {
  if (this->slot_func__ZN9QLineEdit21cursorPositionChangedEii != NULL) {
    // do smth...
    this->slot_func__ZN9QLineEdit21cursorPositionChangedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QLineEdit_SlotProxy_connect__ZN9QLineEdit21cursorPositionChangedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLineEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QLineEdit21cursorPositionChangedEii = (decltype(that->slot_func__ZN9QLineEdit21cursorPositionChangedEii))ffifptr;
  QObject::connect((QLineEdit*)sender, SIGNAL(cursorPositionChanged(int, int)), that, SLOT(slot_proxy_func__ZN9QLineEdit21cursorPositionChangedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QLineEdit_SlotProxy_disconnect__ZN9QLineEdit21cursorPositionChangedEii(QLineEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLineEdit_SlotProxy::slot_proxy_func__ZN9QLineEdit13returnPressedEv() {
  if (this->slot_func__ZN9QLineEdit13returnPressedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QLineEdit13returnPressedEv(this->rsfptr);
  }
}
extern "C"
void* QLineEdit_SlotProxy_connect__ZN9QLineEdit13returnPressedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLineEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QLineEdit13returnPressedEv = (decltype(that->slot_func__ZN9QLineEdit13returnPressedEv))ffifptr;
  QObject::connect((QLineEdit*)sender, SIGNAL(returnPressed()), that, SLOT(slot_proxy_func__ZN9QLineEdit13returnPressedEv()));
  return that;
}
extern "C"
void QLineEdit_SlotProxy_disconnect__ZN9QLineEdit13returnPressedEv(QLineEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLineEdit_SlotProxy::slot_proxy_func__ZN9QLineEdit10textEditedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN9QLineEdit10textEditedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN9QLineEdit10textEditedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QLineEdit_SlotProxy_connect__ZN9QLineEdit10textEditedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLineEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QLineEdit10textEditedERK7QString = (decltype(that->slot_func__ZN9QLineEdit10textEditedERK7QString))ffifptr;
  QObject::connect((QLineEdit*)sender, SIGNAL(textEdited(const class QString &)), that, SLOT(slot_proxy_func__ZN9QLineEdit10textEditedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QLineEdit_SlotProxy_disconnect__ZN9QLineEdit10textEditedERK7QString(QLineEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

