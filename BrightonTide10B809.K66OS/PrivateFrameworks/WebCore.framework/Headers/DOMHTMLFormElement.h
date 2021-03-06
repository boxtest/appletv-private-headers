/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLCollection;

@interface DOMHTMLFormElement : DOMHTMLElement {
}
@property(copy) NSString *acceptCharset;	// G=0x35fddb45; S=0x35fddc69; 
@property(copy) NSString *action;	// G=0x35ef01dd; S=0x35fdde1d; 
@property(retain) id autocapitalize;	// G=0x35fdf8a1; S=0x35fdf9b9; converted property
@property(retain) id autocomplete;	// G=0x35fddfd1; S=0x35fde0f5; converted property
@property(assign) BOOL autocorrect;	// G=0x35fdf699; S=0x35fdf799; converted property
@property(readonly, assign) DOMHTMLCollection *elements;	// G=0x35fdf48d; 
@property(copy) NSString *encoding;	// G=0x35fde601; S=0x35fde7b1; 
@property(copy) NSString *enctype;	// G=0x35fde2a9; S=0x35fde459; 
@property(readonly, assign) int length;	// G=0x35fdf599; 
@property(copy) NSString *method;	// G=0x35fde959; S=0x35fdeb15; 
@property(copy) NSString *name;	// G=0x35fdecbd; S=0x35fdede1; 
@property(assign) BOOL noValidate;	// G=0x35fdef95; S=0x35fdf0a1; converted property
@property(copy) NSString *target;	// G=0x35fdf1b5; S=0x35fdf2d9; 
// declared property getter: - (id)acceptCharset;	// 0x35fddb45
// declared property getter: - (id)action;	// 0x35ef01dd
// converted property getter: - (id)autocapitalize;	// 0x35fdf8a1
// converted property getter: - (id)autocomplete;	// 0x35fddfd1
// converted property getter: - (BOOL)autocorrect;	// 0x35fdf699
- (BOOL)checkValidity;	// 0x35fdfd59
// declared property getter: - (id)elements;	// 0x35fdf48d
// declared property getter: - (id)encoding;	// 0x35fde601
// declared property getter: - (id)enctype;	// 0x35fde2a9
// declared property getter: - (int)length;	// 0x35fdf599
// declared property getter: - (id)method;	// 0x35fde959
// declared property getter: - (id)name;	// 0x35fdecbd
// converted property getter: - (BOOL)noValidate;	// 0x35fdef95
- (void)reset;	// 0x35fdfc5d
// declared property setter: - (void)setAcceptCharset:(id)charset;	// 0x35fddc69
// declared property setter: - (void)setAction:(id)action;	// 0x35fdde1d
// converted property setter: - (void)setAutocapitalize:(id)autocapitalize;	// 0x35fdf9b9
// converted property setter: - (void)setAutocomplete:(id)autocomplete;	// 0x35fde0f5
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x35fdf799
// declared property setter: - (void)setEncoding:(id)encoding;	// 0x35fde7b1
// declared property setter: - (void)setEnctype:(id)enctype;	// 0x35fde459
// declared property setter: - (void)setMethod:(id)method;	// 0x35fdeb15
// declared property setter: - (void)setName:(id)name;	// 0x35fdede1
// converted property setter: - (void)setNoValidate:(BOOL)validate;	// 0x35fdf0a1
// declared property setter: - (void)setTarget:(id)target;	// 0x35fdf2d9
- (int)structuralComplexityContribution;	// 0x3602ac35
- (void)submit;	// 0x35fdfb61
// declared property getter: - (id)target;	// 0x35fdf1b5
@end

