/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSMutableDictionary;

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding> {
@private
	int _localizationStyle;	// 4 = 0x4
	NSMutableDictionary *_requestParameters;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *keyProfile;	// G=0x34e80d65; S=0x34e80d85; 
@property(assign, nonatomic) int localizationStyle;	// G=0x34e8110d; S=0x34e8111d; @synthesize=_localizationStyle
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x34e81025
- (id)copyRequestParameters;	// 0x34e80be9
- (id)copyWithZone:(NSZone *)zone;	// 0x34e80f55
- (id)copyXPCEncoding;	// 0x34e80fd1
- (void)dealloc;	// 0x34e80b9d
// declared property getter: - (id)keyProfile;	// 0x34e80d65
// declared property getter: - (int)localizationStyle;	// 0x34e8110d
// declared property setter: - (void)setKeyProfile:(id)profile;	// 0x34e80d85
// declared property setter: - (void)setLocalizationStyle:(int)style;	// 0x34e8111d
- (void)setValue:(id)value forRequestParameter:(id)requestParameter;	// 0x34e80da5
- (id)valueForRequestParameter:(id)requestParameter;	// 0x34e80f0d
@end

