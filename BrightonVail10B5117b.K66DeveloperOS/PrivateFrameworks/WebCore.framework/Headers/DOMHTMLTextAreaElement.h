/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLFormElement;

@interface DOMHTMLTextAreaElement : DOMHTMLElement {
}
@property(copy) NSString *accessKey;	// G=0x361e7fad; S=0x361e80d1; 
@property(retain) id autocapitalize;	// G=0x361e7ced; S=0x361e7e05; converted property
@property(assign) BOOL autocorrect;	// G=0x361e7ae5; S=0x361e7be5; converted property
@property(assign) BOOL autofocus;	// G=0x361e4c75; S=0x361e4d81; 
@property(assign) int cols;	// G=0x361e4e95; S=0x361e4ec1; 
@property(copy) NSString *defaultValue;	// G=0x361e66d1; S=0x361e688d; 
@property(retain) id dirName;	// G=0x361e4fc1; S=0x361e50e5; converted property
@property(assign) BOOL disabled;	// G=0x361e5299; S=0x361e53a5; 
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x361e54b9; 
@property(assign) int maxLength;	// G=0x361e55bd; S=0x361e56c1; converted property
@property(copy) NSString *name;	// G=0x361e57d5; S=0x361e58f1; 
@property(retain) id placeholder;	// G=0x361e5a99; S=0x361e5bbd; converted property
@property(assign) BOOL readOnly;	// G=0x361e5d71; S=0x361e5e7d; 
@property(assign) BOOL required;	// G=0x361e5f91; S=0x361e609d; converted property
@property(assign) int rows;	// G=0x361e61b1; S=0x361e61dd; 
@property(retain) id selectionDirection;	// G=0x361e7825; S=0x361e793d; converted property
@property(assign) int selectionEnd;	// G=0x361e7625; S=0x361e7725; 
@property(assign) int selectionStart;	// G=0x361e7425; S=0x361e7525; 
@property(readonly, assign) NSString *type;	// G=0x361e65b5; 
@property(copy) NSString *value;	// G=0x361e6a35; S=0x361e6bf5; 
@property(readonly, assign) BOOL willValidate;	// G=0x361e6ef1; 
@property(retain) id wrap;	// G=0x361e62dd; S=0x361e6401; converted property
- (int)_autocapitalizeType;	// 0x361a0d85
- (BOOL)_isEdited;	// 0x361a0d75
// declared property getter: - (id)accessKey;	// 0x361e7fad
// converted property getter: - (id)autocapitalize;	// 0x361e7ced
// converted property getter: - (BOOL)autocorrect;	// 0x361e7ae5
// declared property getter: - (BOOL)autofocus;	// 0x361e4c75
- (BOOL)checkValidity;	// 0x361e8285
// declared property getter: - (int)cols;	// 0x361e4e95
// declared property getter: - (id)defaultValue;	// 0x361e66d1
// converted property getter: - (id)dirName;	// 0x361e4fc1
// declared property getter: - (BOOL)disabled;	// 0x361e5299
// declared property getter: - (id)form;	// 0x361e54b9
- (id)labels;	// 0x361e72bd
// converted property getter: - (int)maxLength;	// 0x361e55bd
// declared property getter: - (id)name;	// 0x361e57d5
// converted property getter: - (id)placeholder;	// 0x361e5a99
// declared property getter: - (BOOL)readOnly;	// 0x361e5d71
// converted property getter: - (BOOL)required;	// 0x361e5f91
// declared property getter: - (int)rows;	// 0x361e61b1
- (void)select;	// 0x361e8531
// converted property getter: - (id)selectionDirection;	// 0x361e7825
// declared property getter: - (int)selectionEnd;	// 0x361e7625
// declared property getter: - (int)selectionStart;	// 0x361e7425
// declared property setter: - (void)setAccessKey:(id)key;	// 0x361e80d1
// converted property setter: - (void)setAutocapitalize:(id)autocapitalize;	// 0x361e7e05
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x361e7be5
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x361e4d81
// declared property setter: - (void)setCols:(int)cols;	// 0x361e4ec1
- (void)setCustomValidity:(id)validity;	// 0x361e8389
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x361e688d
// converted property setter: - (void)setDirName:(id)name;	// 0x361e50e5
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x361e53a5
// converted property setter: - (void)setMaxLength:(int)length;	// 0x361e56c1
// declared property setter: - (void)setName:(id)name;	// 0x361e58f1
// converted property setter: - (void)setPlaceholder:(id)placeholder;	// 0x361e5bbd
// declared property setter: - (void)setReadOnly:(BOOL)only;	// 0x361e5e7d
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x361e609d
// declared property setter: - (void)setRows:(int)rows;	// 0x361e61dd
// converted property setter: - (void)setSelectionDirection:(id)direction;	// 0x361e793d
// declared property setter: - (void)setSelectionEnd:(int)end;	// 0x361e7725
- (void)setSelectionRange:(int)range end:(int)end;	// 0x361e862d
// declared property setter: - (void)setSelectionStart:(int)start;	// 0x361e7525
// declared property setter: - (void)setValue:(id)value;	// 0x361e6bf5
// converted property setter: - (void)setWrap:(id)wrap;	// 0x361e6401
- (int)structuralComplexityContribution;	// 0x362034cd
- (unsigned)textLength;	// 0x361e6d9d
// declared property getter: - (id)type;	// 0x361e65b5
- (id)validationMessage;	// 0x361e7101
- (id)validity;	// 0x361e6ff5
// declared property getter: - (id)value;	// 0x361e6a35
// declared property getter: - (BOOL)willValidate;	// 0x361e6ef1
// converted property getter: - (id)wrap;	// 0x361e62dd
@end
