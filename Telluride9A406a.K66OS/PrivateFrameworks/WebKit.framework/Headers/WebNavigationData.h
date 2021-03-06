/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebNavigationDataPrivate;

__attribute__((visibility("hidden")))
@interface WebNavigationData : NSObject {
@private
	WebNavigationDataPrivate *_private;	// 4 = 0x4
}
- (id)initWithURLString:(id)urlstring title:(id)title originalRequest:(id)request response:(id)response hasSubstituteData:(BOOL)data clientRedirectSource:(id)source;	// 0x30302439
- (id)clientRedirectSource;	// 0x3030237d
- (void)dealloc;	// 0x3030256d
- (BOOL)hasSubstituteData;	// 0x3030235d
- (id)originalRequest;	// 0x3030231d
- (id)response;	// 0x3030233d
- (id)title;	// 0x303022fd
- (id)url;	// 0x303022dd
@end

