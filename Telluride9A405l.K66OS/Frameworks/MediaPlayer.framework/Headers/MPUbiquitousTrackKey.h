/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface MPUbiquitousTrackKey : NSObject <NSCoding, NSCopying> {
@private
	NSDictionary *_keyComponents;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *keyComponents;	// G=0x33c678a5; @synthesize=_keyComponents
+ (id)_ubiquityKeyComponentsMediaItem:(id)item;	// 0x33c672d1
+ (id)ubiquitousTrackKeyForArchiveData:(id)archiveData;	// 0x33c66ef9
+ (id)ubiquitousTrackKeyForMediaItem:(id)mediaItem;	// 0x33c66e65
- (id)initWithCoder:(id)coder;	// 0x33c66ba1
- (id)initWithKeyComponents:(id)keyComponents;	// 0x33c66945
- (id)copyWithZone:(NSZone *)zone;	// 0x33c66d15
- (id)databaseUbiquitousKey;	// 0x33c677e1
- (void)dealloc;	// 0x33c66a89
- (id)description;	// 0x33c66d69
- (void)encodeWithCoder:(id)coder;	// 0x33c66ad5
- (unsigned)hash;	// 0x33c66dd1
- (BOOL)isEqual:(id)equal;	// 0x33c66df9
// declared property getter: - (id)keyComponents;	// 0x33c678a5
- (id)mediaItemLocatorQuery;	// 0x33c6701d
@end

