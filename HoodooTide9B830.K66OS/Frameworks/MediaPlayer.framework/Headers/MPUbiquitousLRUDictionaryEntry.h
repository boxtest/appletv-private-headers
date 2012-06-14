/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@protocol NSObject, NSCopying;

@interface MPUbiquitousLRUDictionaryEntry : NSObject <NSCoding> {
@private
	id<NSObject, NSCopying, NSCoding> _key;	// 4 = 0x4
	id<NSObject, NSCoding> _value;	// 8 = 0x8
	double _timestamp;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) id<NSObject, NSCopying, NSCoding> key;	// G=0x346eeb25; @synthesize=_key
@property(readonly, assign, nonatomic) double timestamp;	// G=0x346eeb45; @synthesize=_timestamp
@property(readonly, assign, nonatomic) id<NSObject, NSCoding> value;	// G=0x346eeb35; @synthesize=_value
- (id)initWithCoder:(id)coder;	// 0x346ee7e1
- (id)initWithKey:(id)key value:(id)value;	// 0x346ee54d
- (id)initWithKey:(id)key value:(id)value timestamp:(double)timestamp;	// 0x346ee4b5
- (void)dealloc;	// 0x346ee581
- (id)description;	// 0x346ee5e1
- (void)encodeWithCoder:(id)coder;	// 0x346eea09
- (unsigned)hash;	// 0x346ee759
- (BOOL)isEqual:(id)equal;	// 0x346ee669
// declared property getter: - (id)key;	// 0x346eeb25
// declared property getter: - (double)timestamp;	// 0x346eeb45
// declared property getter: - (id)value;	// 0x346eeb35
@end
