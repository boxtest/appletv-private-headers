/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSubtitleOption.h"

@class AVMediaSelectionOption;

@interface ATVAVFSubtitleOption : ATVSubtitleOption {
@private
	AVMediaSelectionOption *_selectionOption;	// 24 = 0x18
}
+ (id)emptySubtitleOption;	// 0x35ee1a35
+ (id)subtitleOptionFromOption:(id)option;	// 0x35ee1a71
- (id)initWithOption:(id)option;	// 0x35ee1aad
- (id)_selectionOption;	// 0x35ee1c75
- (void)dealloc;	// 0x35ee1b01
- (BOOL)isEqual:(id)equal;	// 0x35ee1b4d
- (id)languageCode;	// 0x35ee1c31
- (void)saveToDiskForMediaAsset:(id)mediaAsset;	// 0x35ee1bd5
@end
