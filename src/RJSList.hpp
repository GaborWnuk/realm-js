/* Copyright 2015 Realm Inc - All Rights Reserved
 * Proprietary and Confidential
 */

#import "RJSUtil.hpp"
#import "shared_realm.hpp"
#import "list.hpp"

JSClassRef RJSListClass();
JSObjectRef RJSListCreate(JSContextRef ctx, realm::List &list);
