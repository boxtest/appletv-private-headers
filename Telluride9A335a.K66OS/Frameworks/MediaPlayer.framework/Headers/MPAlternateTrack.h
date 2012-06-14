/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MPAlternateTrack : NSObject {
	int _trackID;	// 4 = 0x4
	NSString *_languageCode;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
}
@property(readonly, retain) NSString *languageCode;	// G=0x300f8321; converted property
@property(retain) NSString *name;	// G=0x300f8331; S=0x300f8341; converted property
@property(readonly, assign) int trackID;	// G=0x300f8385; converted property
+ (id)copyOffTrack;	// 0x300f811d
+ (id)threeCharCodesForEncodedISO639_2_T:(id)encodedISO639_2_T;	// 0x300f8395
- (id)initWithTrackID:(id)trackID languageCode:(id)code name:(id)name;	// 0x300f8099
- (int)compare:(id)compare;	// 0x300f821d
- (void)dealloc;	// 0x300f81bd
- (id)description;	// 0x300f8475
- (id)humanReadableLanguage;	// 0x300f82d5
// converted property getter: - (id)languageCode;	// 0x300f8321
// converted property getter: - (id)name;	// 0x300f8331
// converted property setter: - (void)setName:(id)name;	// 0x300f8341
// converted property getter: - (int)trackID;	// 0x300f8385
@end
