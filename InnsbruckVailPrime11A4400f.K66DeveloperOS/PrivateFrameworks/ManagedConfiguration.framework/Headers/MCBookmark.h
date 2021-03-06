/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "NSCopying.h"
#import </libobjc.A.h>
#import "ManagedConfiguration-Structs.h"

@class NSString, NSURL;

@interface MCBookmark : NSObject <NSCopying> {
	NSURL *_URL;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
}
@property(retain, nonatomic) NSURL *URL;	// G=0x313968e1; S=0x313968f1; @synthesize=_URL
@property(retain, nonatomic) NSString *path;	// G=0x31396951; S=0x31396961; @synthesize=_path
@property(retain, nonatomic) NSString *title;	// G=0x31396919; S=0x31396929; @synthesize=_title
- (id)initWithSerializableDictionary:(id)serializableDictionary;	// 0x31396225
- (void).cxx_destruct;	// 0x31396989
// declared property getter: - (id)URL;	// 0x313968e1
- (id)copyWithZone:(NSZone *)zone;	// 0x313964b1
- (id)description;	// 0x31396511
- (BOOL)isEqual:(id)equal;	// 0x31396675
// declared property getter: - (id)path;	// 0x31396951
- (id)serializableDictionary;	// 0x31396345
// declared property setter: - (void)setPath:(id)path;	// 0x31396961
// declared property setter: - (void)setTitle:(id)title;	// 0x31396929
// declared property setter: - (void)setURL:(id)url;	// 0x313968f1
// declared property getter: - (id)title;	// 0x31396919
@end

