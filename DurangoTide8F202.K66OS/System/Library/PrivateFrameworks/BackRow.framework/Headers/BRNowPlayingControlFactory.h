/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"


__attribute__((visibility("hidden")))
@interface BRNowPlayingControlFactory : NSObject <BRControlFactory> {
}
+ (void)_nowPlayingSelected;	// 0x3296dbcd
+ (id)factory;	// 0x3296e159
- (id)_nowPlayingListItemForData:(id)data currentControl:(id)control;	// 0x3296dee9
- (id)_nowPlayingPosterItemForData:(id)data currentControl:(id)control;	// 0x3296dc29
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3296df99
@end

