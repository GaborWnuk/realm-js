/* Copyright 2015 Realm Inc - All Rights Reserved
 * Proprietary and Confidential
 */

#import "RJSUtil.hpp"

namespace realm {
    class Object;
}

JSClassRef RJSObjectClass();
JSObjectRef RJSObjectCreate(JSContextRef ctx, realm::Object object);
