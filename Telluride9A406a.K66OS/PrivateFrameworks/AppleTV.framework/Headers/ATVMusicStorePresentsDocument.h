/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVURLDocument.h"

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ATVMusicStorePresentsDocument : ATVURLDocument {
@private
	long _collectionNumber;	// 76 = 0x4c
	NSString *_requestID;	// 80 = 0x50
	NSURL *_redirectURL;	// 84 = 0x54
	NSDictionary *_catalogCollection;	// 88 = 0x58
}
@property(readonly, retain) NSDictionary *catalogCollection;	// G=0x32fa216d; converted property
@property(readonly, retain) NSURL *redirectURL;	// G=0x32fa215d; converted property
+ (id)documentWithURLRequest:(id)urlrequest requestID:(id)anId collectionNumber:(long)number;	// 0x32fa2031
- (id)initWithURLRequest:(id)urlrequest requestID:(id)anId collectionNumber:(long)number;	// 0x32fa2085
// converted property getter: - (id)catalogCollection;	// 0x32fa216d
- (void)dealloc;	// 0x32fa20e9
- (void)documentLoadedWithCompletionHandler:(id)completionHandler;	// 0x32fa217d
// converted property getter: - (id)redirectURL;	// 0x32fa215d
@end
