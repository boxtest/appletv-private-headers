/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library
#import "ManagedConfiguration-Structs.h"

@class NSNumberFormatter;

@interface MCFormatterVendor : NSObject {
	NSNumberFormatter *_numberFormatter;	// 4 = 0x4
	dispatch_queue_s *_syncQueue;	// 8 = 0x8
}
@property(readonly, retain) NSNumberFormatter *numberFormatter;	// G=0x36552ea5; converted property
+ (id)sharedInstance;	// 0x36552ce5
- (id)init;	// 0x36552d9d
- (void)_localeDidChange:(id)_locale;	// 0x36552e4d
- (void)dealloc;	// 0x36552d11
// converted property getter: - (id)numberFormatter;	// 0x36552ea5
@end

