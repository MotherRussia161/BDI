/* BetterDiscord Installer
 *
 * Copyright (c) 2019-present Jiiks - https://github.com/Jiiks
 * All rights reserved.
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include "ui_product.h"

class Product final : public QWidget {
	Q_OBJECT

public:
	explicit Product(QWidget *parent = Q_NULLPTR);

	void setText(const QString &text) const;
	void setInstallBtnState(bool enabled, const QString &text = "Install") const;
	void setSkipBtnState(bool enabled, const QString &text = "Skip") const;
	void setUninstallBtnState(bool enabled, const QString &text = "Remove") const;
	void setCheckedBtn(int index) const;
	void setIcon(const QString &iconPath) const;

	bool install() const { return _ui.btnInstall->isChecked(); }
	bool skip() const { return _ui.btnSkip->isChecked(); }
	bool uninstall() const { return _ui.btnInstall->isChecked(); }

private:
	Ui::Product _ui;

signals:
	void actionChanged();

public slots:
	void checkBtn(bool checked);
};
