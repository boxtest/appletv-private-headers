/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "StoreBookkeeper-Structs.h"

@class NSURL, SSURLBag, NSString;

@interface MZUPPBagContext : NSObject <NSCopying> {
	SSURLBag *_bag;	// 4 = 0x4
	NSURL *_baseURLForGETAll;	// 8 = 0x8
	NSURL *_baseURLForPUTAll;	// 12 = 0xc
	double _pollingInterval;	// 16 = 0x10
	BOOL _UPPDisabled;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) BOOL UPPDisabled;	// G=0x300f2211; @synthesize=_UPPDisabled
@property(retain, nonatomic) SSURLBag *bag;	// G=0x300f2195; S=0x300f21a5; @synthesize=_bag
@property(copy, nonatomic) NSURL *baseURLForGETAll;	// G=0x300f21b5; S=0x300f21c9; @synthesize=_baseURLForGETAll
@property(copy, nonatomic) NSURL *baseURLForPUTAll;	// G=0x300f21d9; S=0x300f21ed; @synthesize=_baseURLForPUTAll
@property(readonly, assign, nonatomic) NSString *domain;	// G=0x300f2189; 
@property(assign, nonatomic) double pollingInterval;	// G=0x300f2151; S=0x300f21fd; @synthesize=_pollingInterval
+ (void)_loadValueFromBag:(id)bag key:(id)key fallbackKey:(id)key3 completionBlock:(id)block;	// 0x300f16a9
+ (double)defaultPollingInterval;	// 0x300f2011
+ (void)loadBagContextFromURLBag:(id)urlbag completionBlock:(id)block;	// 0x300f16ad
// declared property getter: - (BOOL)UPPDisabled;	// 0x300f2211
// declared property getter: - (id)bag;	// 0x300f2195
// declared property getter: - (id)baseURLForGETAll;	// 0x300f21b5
// declared property getter: - (id)baseURLForPUTAll;	// 0x300f21d9
- (id)copyWithZone:(NSZone *)zone;	// 0x300f20a1
- (void)dealloc;	// 0x300f2029
// declared property getter: - (id)domain;	// 0x300f2189
// declared property getter: - (double)pollingInterval;	// 0x300f2151
// declared property setter: - (void)setBag:(id)bag;	// 0x300f21a5
// declared property setter: - (void)setBaseURLForGETAll:(id)getall;	// 0x300f21c9
// declared property setter: - (void)setBaseURLForPUTAll:(id)putall;	// 0x300f21ed
// declared property setter: - (void)setPollingInterval:(double)interval;	// 0x300f21fd
@end
