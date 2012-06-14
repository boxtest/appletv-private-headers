/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSString, NSMutableDictionary;

@interface APSMessage : NSObject <NSCoding> {
@private
	NSMutableDictionary *_plist;	// 4 = 0x4
}
@property(assign, nonatomic) unsigned identifier;	// G=0x31ba7449; S=0x31ba747d; 
@property(retain, nonatomic) NSString *topic;	// G=0x31ba73d9; S=0x31ba73f5; 
@property(retain, nonatomic) NSDictionary *userInfo;	// G=0x31ba7411; S=0x31ba742d; 
- (id)initWithCoder:(id)coder;	// 0x31ba7339
- (id)initWithDictionary:(id)dictionary;	// 0x31ba7169
- (id)initWithTopic:(id)topic userInfo:(id)info;	// 0x31ba71e1
- (void)dealloc;	// 0x31ba72ed
- (id)dictionaryRepresentation;	// 0x31ba7501
- (void)encodeWithCoder:(id)coder;	// 0x31ba73a9
// declared property getter: - (unsigned)identifier;	// 0x31ba7449
- (id)objectForKey:(id)key;	// 0x31ba74c1
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x31ba747d
- (void)setObject:(id)object forKey:(id)key;	// 0x31ba74e1
// declared property setter: - (void)setTopic:(id)topic;	// 0x31ba73f5
// declared property setter: - (void)setUserInfo:(id)info;	// 0x31ba742d
// declared property getter: - (id)topic;	// 0x31ba73d9
// declared property getter: - (id)userInfo;	// 0x31ba7411
@end
