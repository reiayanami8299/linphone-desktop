/*
 * ConferenceModel.hpp
 * Copyright (C) 2017  Belledonne Communications, Grenoble, France
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 *  Created on: May 23, 2017
 *      Author: Ronan Abhamon
 */

#ifndef CONFERENCE_MODEL_H_
#define CONFERENCE_MODEL_H_

#include <QAbstractListModel>

// =============================================================================

class ConferenceModel : public QAbstractListModel {
public:
  ConferenceModel (QObject *parent = Q_NULLPTR);
  ~ConferenceModel () = default;

  int rowCount (const QModelIndex &index = QModelIndex()) const override;

  QHash<int, QByteArray> roleNames () const override;
  QVariant data (const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
  QStringList mSipAddresses;
};

#endif // CONFERENCE_MODEL_H_