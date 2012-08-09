/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MCProfileWarning : NSObject <NSCoding> {
	NSString *_localizedTitle;	// 4 = 0x4
	NSString *_localizedBody;	// 8 = 0x8
	BOOL _isLongForm;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL isLongForm;	// G=0x33678511; S=0x33678521; @synthesize=_isLongForm
@property(retain, nonatomic) NSString *localizedBody;	// G=0x336784d9; S=0x336784e9; @synthesize=_localizedBody
@property(retain, nonatomic) NSString *localizedTitle;	// G=0x336784a1; S=0x336784b1; @synthesize=_localizedTitle
+ (id)warningWithLocalizedTitle:(id)localizedTitle localizedBody:(id)body isLongForm:(BOOL)form;	// 0x336782bd
- (id)initWithCoder:(id)coder;	// 0x336783c1
- (id)initWithLocalizedTitle:(id)localizedTitle localizedBody:(id)body isLongForm:(BOOL)form;	// 0x3367820d
- (void).cxx_destruct;	// 0x33678531
- (void)encodeWithCoder:(id)coder;	// 0x33678325
// declared property getter: - (BOOL)isLongForm;	// 0x33678511
// declared property getter: - (id)localizedBody;	// 0x336784d9
// declared property getter: - (id)localizedTitle;	// 0x336784a1
// declared property setter: - (void)setIsLongForm:(BOOL)form;	// 0x33678521
// declared property setter: - (void)setLocalizedBody:(id)body;	// 0x336784e9
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x336784b1
@end
