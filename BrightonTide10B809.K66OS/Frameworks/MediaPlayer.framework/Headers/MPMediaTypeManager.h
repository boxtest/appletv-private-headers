/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class UIAlertView, NSString;

@interface MPMediaTypeManager : NSObject {
	int _mediaType;	// 4 = 0x4
	NSString *_bundleID;	// 8 = 0x8
	NSString *_supportsMediaKey;	// 12 = 0xc
	NSString *_defaultsKey;	// 16 = 0x10
	NSString *_alertLocalizationKey;	// 20 = 0x14
	BOOL _installed;	// 24 = 0x18
	UIAlertView *_activeAlert;	// 28 = 0x1c
}
@property(retain, nonatomic) UIAlertView *activeAlert;	// G=0x31d81485; S=0x31d81495; @synthesize=_activeAlert
@property(readonly, assign, nonatomic) NSString *alertLocalizationKey;	// G=0x31d81451; @synthesize=_alertLocalizationKey
@property(readonly, assign, nonatomic) NSString *bundleID;	// G=0x31d81415; @synthesize=_bundleID
@property(readonly, assign, nonatomic) NSString *defaultsKey;	// G=0x31d8143d; @synthesize=_defaultsKey
@property(assign, nonatomic) BOOL installed;	// G=0x31d81465; S=0x31d81475; @synthesize=_installed
@property(readonly, assign, nonatomic) int mediaType;	// G=0x31d81405; @synthesize=_mediaType
@property(readonly, assign, nonatomic) NSString *supportsMediaKey;	// G=0x31d81429; @synthesize=_supportsMediaKey
- (id)initWithMediaType:(int)mediaType bundleID:(id)anId supportsMediaKey:(id)key defaultsKey:(id)key4 alertLocalizationKey:(id)key5;	// 0x31d812a9
// declared property getter: - (id)activeAlert;	// 0x31d81485
// declared property getter: - (id)alertLocalizationKey;	// 0x31d81451
// declared property getter: - (id)bundleID;	// 0x31d81415
- (void)dealloc;	// 0x31d81379
// declared property getter: - (id)defaultsKey;	// 0x31d8143d
// declared property getter: - (BOOL)installed;	// 0x31d81465
// declared property getter: - (int)mediaType;	// 0x31d81405
// declared property setter: - (void)setActiveAlert:(id)alert;	// 0x31d81495
// declared property setter: - (void)setInstalled:(BOOL)installed;	// 0x31d81475
// declared property getter: - (id)supportsMediaKey;	// 0x31d81429
@end

