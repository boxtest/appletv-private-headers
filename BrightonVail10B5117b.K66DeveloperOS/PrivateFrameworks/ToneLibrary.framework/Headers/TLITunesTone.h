/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNumber, NSDictionary;

@interface TLITunesTone : NSObject {
	NSString *_identifier;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
	NSString *_artworkFile;	// 16 = 0x10
	NSDictionary *_playbackProperties;	// 20 = 0x14
	NSNumber *_pid;	// 24 = 0x18
	unsigned _duration;	// 28 = 0x1c
	BOOL _ringtone;	// 32 = 0x20
	BOOL _purchased;	// 33 = 0x21
	BOOL _protected;	// 34 = 0x22
	BOOL _private;	// 35 = 0x23
}
@property(retain, nonatomic) NSString *artworkFile;	// G=0x35c0d7cd; S=0x35c0d7dd; @synthesize=_artworkFile
@property(assign, nonatomic) unsigned duration;	// G=0x35c0d7ed; S=0x35c0d7fd; @synthesize=_duration
@property(retain, nonatomic) NSString *identifier;	// G=0x35c0d6ed; S=0x35c0d6fd; @synthesize=_identifier
@property(retain, nonatomic) NSString *name;	// G=0x35c0d70d; S=0x35c0d71d; @synthesize=_name
@property(retain, nonatomic) NSString *path;	// G=0x35c0d72d; S=0x35c0d73d; @synthesize=_path
@property(retain, nonatomic) NSNumber *pid;	// G=0x35c0d7ad; S=0x35c0d7bd; @synthesize=_pid
@property(retain, nonatomic) NSDictionary *playbackProperties;	// G=0x35c0d74d; S=0x35c0d75d; @synthesize=_playbackProperties
@property(assign, nonatomic) BOOL private;	// G=0x35c0d82d; S=0x35c0d83d; @synthesize=_private
@property(assign, nonatomic) BOOL protected;	// G=0x35c0d80d; S=0x35c0d81d; @synthesize=_protected
@property(assign, nonatomic, getter=isPurchased) BOOL purchased;	// G=0x35c0d76d; S=0x35c0d77d; @synthesize=_purchased
@property(assign, nonatomic, getter=isRingtone) BOOL ringtone;	// G=0x35c0d78d; S=0x35c0d79d; @synthesize=_ringtone
// declared property getter: - (id)artworkFile;	// 0x35c0d7cd
- (void)dealloc;	// 0x35c0d2b9
// declared property getter: - (unsigned)duration;	// 0x35c0d7ed
// declared property getter: - (id)identifier;	// 0x35c0d6ed
// declared property getter: - (BOOL)isPurchased;	// 0x35c0d76d
// declared property getter: - (BOOL)isRingtone;	// 0x35c0d78d
- (BOOL)loadFromPropertyList:(id)propertyList;	// 0x35c0d36d
// declared property getter: - (id)name;	// 0x35c0d70d
// declared property getter: - (id)path;	// 0x35c0d72d
// declared property getter: - (id)pid;	// 0x35c0d7ad
// declared property getter: - (id)playbackProperties;	// 0x35c0d74d
// declared property getter: - (BOOL)private;	// 0x35c0d82d
// declared property getter: - (BOOL)protected;	// 0x35c0d80d
// declared property setter: - (void)setArtworkFile:(id)file;	// 0x35c0d7dd
// declared property setter: - (void)setDuration:(unsigned)duration;	// 0x35c0d7fd
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x35c0d6fd
// declared property setter: - (void)setName:(id)name;	// 0x35c0d71d
// declared property setter: - (void)setPath:(id)path;	// 0x35c0d73d
// declared property setter: - (void)setPid:(id)pid;	// 0x35c0d7bd
// declared property setter: - (void)setPlaybackProperties:(id)properties;	// 0x35c0d75d
// declared property setter: - (void)setPrivate:(BOOL)aPrivate;	// 0x35c0d83d
// declared property setter: - (void)setProtected:(BOOL)aProtected;	// 0x35c0d81d
// declared property setter: - (void)setPurchased:(BOOL)purchased;	// 0x35c0d77d
// declared property setter: - (void)setRingtone:(BOOL)ringtone;	// 0x35c0d79d
@end
