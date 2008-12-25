/*
 * Copyright (C) 2008 Geometer Plus <contact@geometerplus.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef __XMLPARSERCURLDATA_H__
#define __XMLPARSERCURLDATA_H__

#include "CurlData.h"

class ZLXMLReader;

class XMLParserCurlData : public CurlData {

public:
	XMLParserCurlData(const std::string &url, shared_ptr<ZLXMLReader> reader);
	~XMLParserCurlData();
	CURL *handle();

private:
	const std::string myURL;
	std::string myProxy;
	shared_ptr<ZLXMLReader> myReader;
	CURL *myHandle;
};

#endif /* __XMLPARSERCURLDATA_H__ */
