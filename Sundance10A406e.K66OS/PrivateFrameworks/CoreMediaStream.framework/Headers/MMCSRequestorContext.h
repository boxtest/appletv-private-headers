/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class MMCSEngine;
@protocol NSObject;

@interface MMCSRequestorContext : NSObject {
	MMCSEngine *_engine;	// 4 = 0x4
	id<NSObject> _context;	// 8 = 0x8
	char **_signatures;	// 12 = 0xc
	unsigned long _count;	// 16 = 0x10
	unsigned long long *_itemIDs;	// 20 = 0x14
	unsigned *_itemFlags;	// 24 = 0x18
	char **_authTokens;	// 28 = 0x1c
	int _type;	// 32 = 0x20
}
@property(assign, nonatomic) char **authTokens;	// G=0x371a3311; S=0x371a3321; @synthesize=_authTokens
@property(assign, nonatomic) __weak id<NSObject> context;	// G=0x371a325d; S=0x371a327d; @synthesize=_context
@property(assign, nonatomic) unsigned long count;	// G=0x371a32b1; S=0x371a32c1; @synthesize=_count
@property(assign, nonatomic) __weak MMCSEngine *engine;	// G=0x371a3229; S=0x371a3249; @synthesize=_engine
@property(assign, nonatomic) unsigned *itemFlags;	// G=0x371a32f1; S=0x371a3301; @synthesize=_itemFlags
@property(assign, nonatomic) unsigned long long *itemIDs;	// G=0x371a32d1; S=0x371a32e1; @synthesize=_itemIDs
@property(assign, nonatomic) char **signatures;	// G=0x371a3291; S=0x371a32a1; @synthesize=_signatures
@property(assign, nonatomic) int type;	// G=0x371a3331; S=0x371a3341; @synthesize=_type
+ (id)contextWithEngine:(id)engine context:(id)context type:(int)type;	// 0x371a3061
- (id)initWithEngine:(id)engine context:(id)context type:(int)type;	// 0x371a30d5
- (void).cxx_destruct;	// 0x371a3351
// declared property getter: - (char **)authTokens;	// 0x371a3311
// declared property getter: - (id)context;	// 0x371a325d
// declared property getter: - (unsigned long)count;	// 0x371a32b1
- (void)dealloc;	// 0x371a3175
// declared property getter: - (id)engine;	// 0x371a3229
- (BOOL)isEqual:(id)equal;	// 0x371a321d
// declared property getter: - (unsigned *)itemFlags;	// 0x371a32f1
// declared property getter: - (unsigned long long *)itemIDs;	// 0x371a32d1
// declared property setter: - (void)setAuthTokens:(char **)tokens;	// 0x371a3321
// declared property setter: - (void)setContext:(id)context;	// 0x371a327d
// declared property setter: - (void)setCount:(unsigned long)count;	// 0x371a32c1
// declared property setter: - (void)setEngine:(id)engine;	// 0x371a3249
// declared property setter: - (void)setItemFlags:(unsigned *)flags;	// 0x371a3301
// declared property setter: - (void)setItemIDs:(unsigned long long *)ids;	// 0x371a32e1
// declared property setter: - (void)setSignatures:(char **)signatures;	// 0x371a32a1
// declared property setter: - (void)setType:(int)type;	// 0x371a3341
// declared property getter: - (char **)signatures;	// 0x371a3291
// declared property getter: - (int)type;	// 0x371a3331
@end
