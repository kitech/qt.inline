// /usr/include/qt/QtWidgets/qcombobox.h
#include <qcombobox.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qcombobox.h:59
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QComboBox10metaObjectEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qcombobox.h:83
// void QComboBox(class QWidget *)
extern "C"
void* C_ZN9QComboBoxC1EP7QWidget(QWidget * parent) {
  return new QComboBox(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qcombobox.h:84
// void ~QComboBox()
extern "C"
void C_ZN9QComboBoxD1Ev(void *this_) {
  delete (QComboBox*)(this_);
}
// /usr/include/qt/QtWidgets/qcombobox.h:86
// int maxVisibleItems()
extern "C"
void C_ZNK9QComboBox15maxVisibleItemsEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->maxVisibleItems();
}
// /usr/include/qt/QtWidgets/qcombobox.h:87
// void setMaxVisibleItems(int)
extern "C"
void C_ZN9QComboBox18setMaxVisibleItemsEi(void *this_, int maxItems) {
  ((QComboBox*)this_)->setMaxVisibleItems(maxItems);
}
// /usr/include/qt/QtWidgets/qcombobox.h:89
// int count()
extern "C"
void C_ZNK9QComboBox5countEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->count();
}
// /usr/include/qt/QtWidgets/qcombobox.h:90
// void setMaxCount(int)
extern "C"
void C_ZN9QComboBox11setMaxCountEi(void *this_, int max) {
  ((QComboBox*)this_)->setMaxCount(max);
}
// /usr/include/qt/QtWidgets/qcombobox.h:91
// int maxCount()
extern "C"
void C_ZNK9QComboBox8maxCountEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->maxCount();
}
// /usr/include/qt/QtWidgets/qcombobox.h:94
// bool autoCompletion()
extern "C"
void C_ZNK9QComboBox14autoCompletionEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->autoCompletion();
}
// /usr/include/qt/QtWidgets/qcombobox.h:95
// void setAutoCompletion(_Bool)
extern "C"
void C_ZN9QComboBox17setAutoCompletionEb(void *this_, bool enable) {
  ((QComboBox*)this_)->setAutoCompletion(enable);
}
// /usr/include/qt/QtWidgets/qcombobox.h:97
// Qt::CaseSensitivity autoCompletionCaseSensitivity()
extern "C"
void C_ZNK9QComboBox29autoCompletionCaseSensitivityEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->autoCompletionCaseSensitivity();
}
// /usr/include/qt/QtWidgets/qcombobox.h:98
// void setAutoCompletionCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void C_ZN9QComboBox32setAutoCompletionCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity sensitivity) {
  ((QComboBox*)this_)->setAutoCompletionCaseSensitivity(sensitivity);
}
// /usr/include/qt/QtWidgets/qcombobox.h:101
// bool duplicatesEnabled()
extern "C"
void C_ZNK9QComboBox17duplicatesEnabledEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->duplicatesEnabled();
}
// /usr/include/qt/QtWidgets/qcombobox.h:102
// void setDuplicatesEnabled(_Bool)
extern "C"
void C_ZN9QComboBox20setDuplicatesEnabledEb(void *this_, bool enable) {
  ((QComboBox*)this_)->setDuplicatesEnabled(enable);
}
// /usr/include/qt/QtWidgets/qcombobox.h:104
// void setFrame(_Bool)
extern "C"
void C_ZN9QComboBox8setFrameEb(void *this_, bool a0) {
  ((QComboBox*)this_)->setFrame(a0);
}
// /usr/include/qt/QtWidgets/qcombobox.h:105
// bool hasFrame()
extern "C"
void C_ZNK9QComboBox8hasFrameEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->hasFrame();
}
// inline
// /usr/include/qt/QtWidgets/qcombobox.h:107
// int findText(const class QString &, Qt::MatchFlags)
extern "C"
void C_ZNK9QComboBox8findTextERK7QString6QFlagsIN2Qt9MatchFlagEE(void *this_, const QString & text, QFlags<Qt::MatchFlag> flags) {
  /*return*/ ((QComboBox*)this_)->findText(text, flags);
}
// /usr/include/qt/QtWidgets/qcombobox.h:110
// int findData(const class QVariant &, int, Qt::MatchFlags)
extern "C"
void C_ZNK9QComboBox8findDataERK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void *this_, const QVariant & data, int role, QFlags<Qt::MatchFlag> flags) {
  /*return*/ ((QComboBox*)this_)->findData(data, role, flags);
}
// /usr/include/qt/QtWidgets/qcombobox.h:124
// QComboBox::InsertPolicy insertPolicy()
extern "C"
void C_ZNK9QComboBox12insertPolicyEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->insertPolicy();
}
// /usr/include/qt/QtWidgets/qcombobox.h:125
// void setInsertPolicy(enum QComboBox::InsertPolicy)
extern "C"
void C_ZN9QComboBox15setInsertPolicyENS_12InsertPolicyE(void *this_, QComboBox::InsertPolicy policy) {
  ((QComboBox*)this_)->setInsertPolicy(policy);
}
// /usr/include/qt/QtWidgets/qcombobox.h:135
// QComboBox::SizeAdjustPolicy sizeAdjustPolicy()
extern "C"
void C_ZNK9QComboBox16sizeAdjustPolicyEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->sizeAdjustPolicy();
}
// /usr/include/qt/QtWidgets/qcombobox.h:136
// void setSizeAdjustPolicy(enum QComboBox::SizeAdjustPolicy)
extern "C"
void C_ZN9QComboBox19setSizeAdjustPolicyENS_16SizeAdjustPolicyE(void *this_, QComboBox::SizeAdjustPolicy policy) {
  ((QComboBox*)this_)->setSizeAdjustPolicy(policy);
}
// /usr/include/qt/QtWidgets/qcombobox.h:137
// int minimumContentsLength()
extern "C"
void C_ZNK9QComboBox21minimumContentsLengthEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->minimumContentsLength();
}
// /usr/include/qt/QtWidgets/qcombobox.h:138
// void setMinimumContentsLength(int)
extern "C"
void C_ZN9QComboBox24setMinimumContentsLengthEi(void *this_, int characters) {
  ((QComboBox*)this_)->setMinimumContentsLength(characters);
}
// /usr/include/qt/QtWidgets/qcombobox.h:139
// QSize iconSize()
extern "C"
void C_ZNK9QComboBox8iconSizeEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->iconSize();
}
// /usr/include/qt/QtWidgets/qcombobox.h:140
// void setIconSize(const class QSize &)
extern "C"
void C_ZN9QComboBox11setIconSizeERK5QSize(void *this_, const QSize & size) {
  ((QComboBox*)this_)->setIconSize(size);
}
// /usr/include/qt/QtWidgets/qcombobox.h:142
// bool isEditable()
extern "C"
void C_ZNK9QComboBox10isEditableEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->isEditable();
}
// /usr/include/qt/QtWidgets/qcombobox.h:143
// void setEditable(_Bool)
extern "C"
void C_ZN9QComboBox11setEditableEb(void *this_, bool editable) {
  ((QComboBox*)this_)->setEditable(editable);
}
// /usr/include/qt/QtWidgets/qcombobox.h:144
// void setLineEdit(class QLineEdit *)
extern "C"
void C_ZN9QComboBox11setLineEditEP9QLineEdit(void *this_, QLineEdit * edit) {
  ((QComboBox*)this_)->setLineEdit(edit);
}
// /usr/include/qt/QtWidgets/qcombobox.h:145
// QLineEdit * lineEdit()
extern "C"
void C_ZNK9QComboBox8lineEditEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->lineEdit();
}
// /usr/include/qt/QtWidgets/qcombobox.h:147
// void setValidator(const class QValidator *)
extern "C"
void C_ZN9QComboBox12setValidatorEPK10QValidator(void *this_, const QValidator * v) {
  ((QComboBox*)this_)->setValidator(v);
}
// /usr/include/qt/QtWidgets/qcombobox.h:148
// const QValidator * validator()
extern "C"
void C_ZNK9QComboBox9validatorEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->validator();
}
// /usr/include/qt/QtWidgets/qcombobox.h:152
// void setCompleter(class QCompleter *)
extern "C"
void C_ZN9QComboBox12setCompleterEP10QCompleter(void *this_, QCompleter * c) {
  ((QComboBox*)this_)->setCompleter(c);
}
// /usr/include/qt/QtWidgets/qcombobox.h:153
// QCompleter * completer()
extern "C"
void C_ZNK9QComboBox9completerEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->completer();
}
// /usr/include/qt/QtWidgets/qcombobox.h:156
// QAbstractItemDelegate * itemDelegate()
extern "C"
void C_ZNK9QComboBox12itemDelegateEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->itemDelegate();
}
// /usr/include/qt/QtWidgets/qcombobox.h:157
// void setItemDelegate(class QAbstractItemDelegate *)
extern "C"
void C_ZN9QComboBox15setItemDelegateEP21QAbstractItemDelegate(void *this_, QAbstractItemDelegate * delegate) {
  ((QComboBox*)this_)->setItemDelegate(delegate);
}
// /usr/include/qt/QtWidgets/qcombobox.h:159
// QAbstractItemModel * model()
extern "C"
void C_ZNK9QComboBox5modelEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->model();
}
// /usr/include/qt/QtWidgets/qcombobox.h:160
// void setModel(class QAbstractItemModel *)
extern "C"
void C_ZN9QComboBox8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QComboBox*)this_)->setModel(model);
}
// /usr/include/qt/QtWidgets/qcombobox.h:162
// QModelIndex rootModelIndex()
extern "C"
void C_ZNK9QComboBox14rootModelIndexEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->rootModelIndex();
}
// /usr/include/qt/QtWidgets/qcombobox.h:163
// void setRootModelIndex(const class QModelIndex &)
extern "C"
void C_ZN9QComboBox17setRootModelIndexERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QComboBox*)this_)->setRootModelIndex(index);
}
// /usr/include/qt/QtWidgets/qcombobox.h:165
// int modelColumn()
extern "C"
void C_ZNK9QComboBox11modelColumnEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->modelColumn();
}
// /usr/include/qt/QtWidgets/qcombobox.h:166
// void setModelColumn(int)
extern "C"
void C_ZN9QComboBox14setModelColumnEi(void *this_, int visibleColumn) {
  ((QComboBox*)this_)->setModelColumn(visibleColumn);
}
// /usr/include/qt/QtWidgets/qcombobox.h:168
// int currentIndex()
extern "C"
void C_ZNK9QComboBox12currentIndexEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->currentIndex();
}
// /usr/include/qt/QtWidgets/qcombobox.h:169
// QString currentText()
extern "C"
void C_ZNK9QComboBox11currentTextEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->currentText();
}
// /usr/include/qt/QtWidgets/qcombobox.h:170
// QVariant currentData(int)
extern "C"
void C_ZNK9QComboBox11currentDataEi(void *this_, int role) {
  /*return*/ ((QComboBox*)this_)->currentData(role);
}
// /usr/include/qt/QtWidgets/qcombobox.h:172
// QString itemText(int)
extern "C"
void C_ZNK9QComboBox8itemTextEi(void *this_, int index) {
  /*return*/ ((QComboBox*)this_)->itemText(index);
}
// /usr/include/qt/QtWidgets/qcombobox.h:173
// QIcon itemIcon(int)
extern "C"
void C_ZNK9QComboBox8itemIconEi(void *this_, int index) {
  /*return*/ ((QComboBox*)this_)->itemIcon(index);
}
// /usr/include/qt/QtWidgets/qcombobox.h:174
// QVariant itemData(int, int)
extern "C"
void C_ZNK9QComboBox8itemDataEii(void *this_, int index, int role) {
  /*return*/ ((QComboBox*)this_)->itemData(index, role);
}
// inline
// /usr/include/qt/QtWidgets/qcombobox.h:176
// void addItem(const class QString &, const class QVariant &)
extern "C"
void C_ZN9QComboBox7addItemERK7QStringRK8QVariant(void *this_, const QString & text, const QVariant & userData) {
  ((QComboBox*)this_)->addItem(text, userData);
}
// inline
// /usr/include/qt/QtWidgets/qcombobox.h:177
// void addItem(const class QIcon &, const class QString &, const class QVariant &)
extern "C"
void C_ZN9QComboBox7addItemERK5QIconRK7QStringRK8QVariant(void *this_, const QIcon & icon, const QString & text, const QVariant & userData) {
  ((QComboBox*)this_)->addItem(icon, text, userData);
}
// inline
// /usr/include/qt/QtWidgets/qcombobox.h:179
// void addItems(const class QStringList &)
extern "C"
void C_ZN9QComboBox8addItemsERK11QStringList(void *this_, const QStringList & texts) {
  ((QComboBox*)this_)->addItems(texts);
}
// inline
// /usr/include/qt/QtWidgets/qcombobox.h:182
// void insertItem(int, const class QString &, const class QVariant &)
extern "C"
void C_ZN9QComboBox10insertItemEiRK7QStringRK8QVariant(void *this_, int index, const QString & text, const QVariant & userData) {
  ((QComboBox*)this_)->insertItem(index, text, userData);
}
// /usr/include/qt/QtWidgets/qcombobox.h:183
// void insertItem(int, const class QIcon &, const class QString &, const class QVariant &)
extern "C"
void C_ZN9QComboBox10insertItemEiRK5QIconRK7QStringRK8QVariant(void *this_, int index, const QIcon & icon, const QString & text, const QVariant & userData) {
  ((QComboBox*)this_)->insertItem(index, icon, text, userData);
}
// /usr/include/qt/QtWidgets/qcombobox.h:185
// void insertItems(int, const class QStringList &)
extern "C"
void C_ZN9QComboBox11insertItemsEiRK11QStringList(void *this_, int index, const QStringList & texts) {
  ((QComboBox*)this_)->insertItems(index, texts);
}
// /usr/include/qt/QtWidgets/qcombobox.h:186
// void insertSeparator(int)
extern "C"
void C_ZN9QComboBox15insertSeparatorEi(void *this_, int index) {
  ((QComboBox*)this_)->insertSeparator(index);
}
// /usr/include/qt/QtWidgets/qcombobox.h:188
// void removeItem(int)
extern "C"
void C_ZN9QComboBox10removeItemEi(void *this_, int index) {
  ((QComboBox*)this_)->removeItem(index);
}
// /usr/include/qt/QtWidgets/qcombobox.h:190
// void setItemText(int, const class QString &)
extern "C"
void C_ZN9QComboBox11setItemTextEiRK7QString(void *this_, int index, const QString & text) {
  ((QComboBox*)this_)->setItemText(index, text);
}
// /usr/include/qt/QtWidgets/qcombobox.h:191
// void setItemIcon(int, const class QIcon &)
extern "C"
void C_ZN9QComboBox11setItemIconEiRK5QIcon(void *this_, int index, const QIcon & icon) {
  ((QComboBox*)this_)->setItemIcon(index, icon);
}
// /usr/include/qt/QtWidgets/qcombobox.h:192
// void setItemData(int, const class QVariant &, int)
extern "C"
void C_ZN9QComboBox11setItemDataEiRK8QVarianti(void *this_, int index, const QVariant & value, int role) {
  ((QComboBox*)this_)->setItemData(index, value, role);
}
// /usr/include/qt/QtWidgets/qcombobox.h:194
// QAbstractItemView * view()
extern "C"
void C_ZNK9QComboBox4viewEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->view();
}
// /usr/include/qt/QtWidgets/qcombobox.h:195
// void setView(class QAbstractItemView *)
extern "C"
void C_ZN9QComboBox7setViewEP17QAbstractItemView(void *this_, QAbstractItemView * itemView) {
  ((QComboBox*)this_)->setView(itemView);
}
// virtual
// /usr/include/qt/QtWidgets/qcombobox.h:197
// QSize sizeHint()
extern "C"
void C_ZNK9QComboBox8sizeHintEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qcombobox.h:198
// QSize minimumSizeHint()
extern "C"
void C_ZNK9QComboBox15minimumSizeHintEv(void *this_) {
  /*return*/ ((QComboBox*)this_)->minimumSizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qcombobox.h:200
// void showPopup()
extern "C"
void C_ZN9QComboBox9showPopupEv(void *this_) {
  ((QComboBox*)this_)->showPopup();
}
// virtual
// /usr/include/qt/QtWidgets/qcombobox.h:201
// void hidePopup()
extern "C"
void C_ZN9QComboBox9hidePopupEv(void *this_) {
  ((QComboBox*)this_)->hidePopup();
}
// virtual
// /usr/include/qt/QtWidgets/qcombobox.h:203
// bool event(class QEvent *)
extern "C"
void C_ZN9QComboBox5eventEP6QEvent(void *this_, QEvent * event) {
  /*return*/ ((QComboBox*)this_)->event(event);
}
// virtual
// /usr/include/qt/QtWidgets/qcombobox.h:204
// QVariant inputMethodQuery(Qt::InputMethodQuery)
extern "C"
void C_ZNK9QComboBox16inputMethodQueryEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery a0) {
  /*return*/ ((QComboBox*)this_)->inputMethodQuery(a0);
}
// /usr/include/qt/QtWidgets/qcombobox.h:205
// QVariant inputMethodQuery(Qt::InputMethodQuery, const class QVariant &)
extern "C"
void C_ZNK9QComboBox16inputMethodQueryEN2Qt16InputMethodQueryERK8QVariant(void *this_, Qt::InputMethodQuery query, const QVariant & argument) {
  /*return*/ ((QComboBox*)this_)->inputMethodQuery(query, argument);
}
// /usr/include/qt/QtWidgets/qcombobox.h:208
// void clear()
extern "C"
void C_ZN9QComboBox5clearEv(void *this_) {
  ((QComboBox*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qcombobox.h:209
// void clearEditText()
extern "C"
void C_ZN9QComboBox13clearEditTextEv(void *this_) {
  ((QComboBox*)this_)->clearEditText();
}
// /usr/include/qt/QtWidgets/qcombobox.h:210
// void setEditText(const class QString &)
extern "C"
void C_ZN9QComboBox11setEditTextERK7QString(void *this_, const QString & text) {
  ((QComboBox*)this_)->setEditText(text);
}
// /usr/include/qt/QtWidgets/qcombobox.h:211
// void setCurrentIndex(int)
extern "C"
void C_ZN9QComboBox15setCurrentIndexEi(void *this_, int index) {
  ((QComboBox*)this_)->setCurrentIndex(index);
}
// /usr/include/qt/QtWidgets/qcombobox.h:212
// void setCurrentText(const class QString &)
extern "C"
void C_ZN9QComboBox14setCurrentTextERK7QString(void *this_, const QString & text) {
  ((QComboBox*)this_)->setCurrentText(text);
}
// /usr/include/qt/QtWidgets/qcombobox.h:215
// void editTextChanged(const class QString &)
extern "C"
void C_ZN9QComboBox15editTextChangedERK7QString(void *this_, const QString & a0) {
  ((QComboBox*)this_)->editTextChanged(a0);
}
// /usr/include/qt/QtWidgets/qcombobox.h:216
// void activated(int)
extern "C"
void C_ZN9QComboBox9activatedEi(void *this_, int index) {
  ((QComboBox*)this_)->activated(index);
}
// /usr/include/qt/QtWidgets/qcombobox.h:217
// void activated(const class QString &)
extern "C"
void C_ZN9QComboBox9activatedERK7QString(void *this_, const QString & a0) {
  ((QComboBox*)this_)->activated(a0);
}
// /usr/include/qt/QtWidgets/qcombobox.h:218
// void highlighted(int)
extern "C"
void C_ZN9QComboBox11highlightedEi(void *this_, int index) {
  ((QComboBox*)this_)->highlighted(index);
}
// /usr/include/qt/QtWidgets/qcombobox.h:219
// void highlighted(const class QString &)
extern "C"
void C_ZN9QComboBox11highlightedERK7QString(void *this_, const QString & a0) {
  ((QComboBox*)this_)->highlighted(a0);
}
// /usr/include/qt/QtWidgets/qcombobox.h:220
// void currentIndexChanged(int)
extern "C"
void C_ZN9QComboBox19currentIndexChangedEi(void *this_, int index) {
  ((QComboBox*)this_)->currentIndexChanged(index);
}
// /usr/include/qt/QtWidgets/qcombobox.h:221
// void currentIndexChanged(const class QString &)
extern "C"
void C_ZN9QComboBox19currentIndexChangedERK7QString(void *this_, const QString & a0) {
  ((QComboBox*)this_)->currentIndexChanged(a0);
}
// /usr/include/qt/QtWidgets/qcombobox.h:222
// void currentTextChanged(const class QString &)
extern "C"
void C_ZN9QComboBox18currentTextChangedERK7QString(void *this_, const QString & a0) {
  ((QComboBox*)this_)->currentTextChanged(a0);
}