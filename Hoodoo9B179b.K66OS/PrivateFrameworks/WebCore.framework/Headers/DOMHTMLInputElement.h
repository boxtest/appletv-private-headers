/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, DOMFileList, NSURL, NSString;

@interface DOMHTMLInputElement : DOMHTMLElement {
}
@property(readonly, copy) NSURL *absoluteImageURL;	// G=0x33756275; 
@property(copy) NSString *accept;	// G=0x337546f5; S=0x33753525; 
@property(copy) NSString *accessKey;	// G=0x337547d5; S=0x33753669; 
@property(copy) NSString *align;	// G=0x337548b5; S=0x337537ad; 
@property(copy) NSString *alt;	// G=0x33754995; S=0x337538f1; 
@property(readonly, copy) NSString *altDisplayString;	// G=0x33756085; 
@property(retain) id autocapitalize;	// G=0x337566f1; S=0x337567c5; converted property
@property(assign) BOOL autocorrect;	// G=0x33756569; S=0x33756625; converted property
@property(assign) BOOL autofocus;	// G=0x337522d9; S=0x33752871; 
@property(assign) BOOL checked;	// G=0x33751925; S=0x33755161; 
@property(assign) BOOL defaultChecked;	// G=0x33752149; S=0x337526c1; 
@property(copy) NSString *defaultValue;	// G=0x33751d75; S=0x33752011; 
@property(assign) BOOL disabled;	// G=0x33751959; S=0x33751a19; 
@property(readonly, retain) DOMFileList *files;	// G=0x3375635d; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x33752ca9; 
@property(retain) id formAction;	// G=0x33752d65; S=0x33753015; converted property
@property(retain) id formEnctype;	// G=0x33754455; S=0x33753159; converted property
@property(retain) id formMethod;	// G=0x33754535; S=0x3375329d; converted property
@property(assign) BOOL formNoValidate;	// G=0x33752211; S=0x33752799; converted property
@property(retain) id formTarget;	// G=0x33754615; S=0x337533e1; converted property
@property(assign) BOOL incremental;	// G=0x337525f9; S=0x33752bd1; converted property
@property(assign) BOOL indeterminate;	// G=0x33751c69; S=0x33755cc9; 
@property(retain) id max;	// G=0x33754a75; S=0x33753a35; converted property
@property(assign) int maxLength;	// G=0x33751ae9; S=0x33755231; 
@property(retain) id min;	// G=0x33754b55; S=0x33753b79; converted property
@property(assign) BOOL multiple;	// G=0x337523a1; S=0x33752949; 
@property(copy) NSString *name;	// G=0x33754c35; S=0x33753cbd; 
@property(retain) id pattern;	// G=0x33754d15; S=0x33753e01; converted property
@property(retain) id placeholder;	// G=0x33754df5; S=0x33753f45; converted property
@property(assign) BOOL readOnly;	// G=0x33752469; S=0x33752a21; 
@property(assign) BOOL required;	// G=0x33752531; S=0x33752af9; converted property
@property(assign) int selectionEnd;	// G=0x33755f0d; S=0x33755fc9; 
@property(assign) int selectionStart;	// G=0x33755d95; S=0x33755e51; 
@property(copy) NSString *size;	// G=0x337552fd; S=0x33755455; 
@property(copy) NSString *src;	// G=0x33752ebd; S=0x33754089; 
@property(retain) id step;	// G=0x33754ed5; S=0x337541cd; converted property
@property(copy) NSString *type;	// G=0x33751c9d; S=0x337555a1; 
@property(copy) NSString *useMap;	// G=0x33754fb5; S=0x33754311; 
@property(copy) NSString *value;	// G=0x33751ec1; S=0x337556d9; 
@property(assign) double valueAsDate;	// G=0x33755811; S=0x337558f1; converted property
@property(assign) double valueAsNumber;	// G=0x337559e5; S=0x33755aa5; converted property
@property(readonly, assign) BOOL willValidate;	// G=0x33751ba9; 
- (int)_autocapitalizeType;	// 0x33739d8d
- (BOOL)_isAutofilled;	// 0x33739af1
- (BOOL)_isEdited;	// 0x33739d6d
- (BOOL)_isTextField;	// 0x33739b01
- (void)_replaceCharactersInRange:(NSRange)range withString:(id)string selectingFromIndex:(int)index;	// 0x33739b11
- (NSRange)_selectedRange;	// 0x33739ccd
- (void)_setAutofilled:(BOOL)autofilled;	// 0x33739cfd
// declared property getter: - (id)absoluteImageURL;	// 0x33756275
// declared property getter: - (id)accept;	// 0x337546f5
// declared property getter: - (id)accessKey;	// 0x337547d5
// declared property getter: - (id)align;	// 0x337548b5
// declared property getter: - (id)alt;	// 0x33754995
// declared property getter: - (id)altDisplayString;	// 0x33756085
// converted property getter: - (id)autocapitalize;	// 0x337566f1
// converted property getter: - (BOOL)autocorrect;	// 0x33756569
// declared property getter: - (BOOL)autofocus;	// 0x337522d9
- (BOOL)checkValidity;	// 0x33756a95
// declared property getter: - (BOOL)checked;	// 0x33751925
- (void)click;	// 0x33756d45
// declared property getter: - (BOOL)defaultChecked;	// 0x33752149
// declared property getter: - (id)defaultValue;	// 0x33751d75
// declared property getter: - (BOOL)disabled;	// 0x33751959
// declared property getter: - (id)files;	// 0x3375635d
// declared property getter: - (id)form;	// 0x33752ca9
// converted property getter: - (id)formAction;	// 0x33752d65
// converted property getter: - (id)formEnctype;	// 0x33754455
// converted property getter: - (id)formMethod;	// 0x33754535
// converted property getter: - (BOOL)formNoValidate;	// 0x33752211
// converted property getter: - (id)formTarget;	// 0x33754615
// converted property getter: - (BOOL)incremental;	// 0x337525f9
// declared property getter: - (BOOL)indeterminate;	// 0x33751c69
- (id)labels;	// 0x33756421
// converted property getter: - (id)max;	// 0x33754a75
// declared property getter: - (int)maxLength;	// 0x33751ae9
// converted property getter: - (id)min;	// 0x33754b55
// declared property getter: - (BOOL)multiple;	// 0x337523a1
// declared property getter: - (id)name;	// 0x33754c35
// converted property getter: - (id)pattern;	// 0x33754d15
// converted property getter: - (id)placeholder;	// 0x33754df5
// declared property getter: - (BOOL)readOnly;	// 0x33752469
// converted property getter: - (BOOL)required;	// 0x33752531
- (void)select;	// 0x33756c8d
// declared property getter: - (int)selectionEnd;	// 0x33755f0d
// declared property getter: - (int)selectionStart;	// 0x33755d95
// declared property setter: - (void)setAccept:(id)accept;	// 0x33753525
// declared property setter: - (void)setAccessKey:(id)key;	// 0x33753669
// declared property setter: - (void)setAlign:(id)align;	// 0x337537ad
// declared property setter: - (void)setAlt:(id)alt;	// 0x337538f1
// converted property setter: - (void)setAutocapitalize:(id)autocapitalize;	// 0x337567c5
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x33756625
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x33752871
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x33755161
- (void)setCustomValidity:(id)validity;	// 0x33756b55
// declared property setter: - (void)setDefaultChecked:(BOOL)checked;	// 0x337526c1
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x33752011
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x33751a19
// converted property setter: - (void)setFormAction:(id)action;	// 0x33753015
// converted property setter: - (void)setFormEnctype:(id)enctype;	// 0x33753159
// converted property setter: - (void)setFormMethod:(id)method;	// 0x3375329d
// converted property setter: - (void)setFormNoValidate:(BOOL)validate;	// 0x33752799
// converted property setter: - (void)setFormTarget:(id)target;	// 0x337533e1
// converted property setter: - (void)setIncremental:(BOOL)incremental;	// 0x33752bd1
// declared property setter: - (void)setIndeterminate:(BOOL)indeterminate;	// 0x33755cc9
// converted property setter: - (void)setMax:(id)max;	// 0x33753a35
// declared property setter: - (void)setMaxLength:(int)length;	// 0x33755231
// converted property setter: - (void)setMin:(id)min;	// 0x33753b79
// declared property setter: - (void)setMultiple:(BOOL)multiple;	// 0x33752949
// declared property setter: - (void)setName:(id)name;	// 0x33753cbd
// converted property setter: - (void)setPattern:(id)pattern;	// 0x33753e01
// converted property setter: - (void)setPlaceholder:(id)placeholder;	// 0x33753f45
// declared property setter: - (void)setReadOnly:(BOOL)only;	// 0x33752a21
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x33752af9
// declared property setter: - (void)setSelectionEnd:(int)end;	// 0x33755fc9
- (void)setSelectionRange:(int)range end:(int)end;	// 0x33756f35
// declared property setter: - (void)setSelectionStart:(int)start;	// 0x33755e51
// declared property setter: - (void)setSize:(id)size;	// 0x33755455
// declared property setter: - (void)setSrc:(id)src;	// 0x33754089
// converted property setter: - (void)setStep:(id)step;	// 0x337541cd
// declared property setter: - (void)setType:(id)type;	// 0x337555a1
// declared property setter: - (void)setUseMap:(id)map;	// 0x33754311
// declared property setter: - (void)setValue:(id)value;	// 0x337556d9
// converted property setter: - (void)setValueAsDate:(double)date;	// 0x337558f1
// converted property setter: - (void)setValueAsNumber:(double)number;	// 0x33755aa5
- (void)setValueForUser:(id)user;	// 0x33756dfd
// declared property getter: - (id)size;	// 0x337552fd
// declared property getter: - (id)src;	// 0x33752ebd
// converted property getter: - (id)step;	// 0x33754ed5
- (void)stepDown:(int)down;	// 0x337569c9
- (void)stepUp:(int)up;	// 0x337568fd
- (int)structuralComplexityContribution;	// 0x33781001
// declared property getter: - (id)type;	// 0x33751c9d
// declared property getter: - (id)useMap;	// 0x33754fb5
- (id)validationMessage;	// 0x33755b7d
- (id)validity;	// 0x33755095
// declared property getter: - (id)value;	// 0x33751ec1
// converted property getter: - (double)valueAsDate;	// 0x33755811
// converted property getter: - (double)valueAsNumber;	// 0x337559e5
// declared property getter: - (BOOL)willValidate;	// 0x33751ba9
@end

