/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QStyledItemDelegate>

namespace WalletGui {

class LinkLikeColumnDelegate : public QStyledItemDelegate {
  Q_OBJECT
  Q_DISABLE_COPY(LinkLikeColumnDelegate)

public:
  explicit LinkLikeColumnDelegate(QObject* _parent);
  ~LinkLikeColumnDelegate();

  void paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
};

}
