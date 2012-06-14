/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ATVMediaOption.h"

@class AVMediaSelectionOption;

@interface ATVAudioOption : NSObject <ATVMediaOption> {
@private
	AVMediaSelectionOption *_selectionOption;	// 4 = 0x4
}
+ (id)audioOptionFromOption:(id)option;	// 0x32ac2065
- (id)initWithOption:(id)option;	// 0x32ac20a1
- (id)_selectionOption;	// 0x32ac22e1
- (void)dealloc;	// 0x32ac20f5
- (BOOL)isEqual:(id)equal;	// 0x32ac2141
- (id)languageCode;	// 0x32ac2239
- (id)locale;	// 0x32ac2219
- (id)localizedDisplayString;	// 0x32ac227d
- (void)saveToDiskForMediaAsset:(id)mediaAsset;	// 0x32ac21bd
@end
