/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMXMLParserContext.h"

@class NSString, NSAttributedString, NSMutableDictionary, NSMutableArray, NSMutableAttributedString, NSArray;

@interface IMToSuperParserContext : IMXMLParserContext {
	unsigned _underlineCount;	// 8 = 0x8
	unsigned _boldCount;	// 12 = 0xc
	unsigned _italicCount;	// 16 = 0x10
	unsigned _strikethroughCount;	// 20 = 0x14
	unsigned _messagePartNumber;	// 24 = 0x18
	NSMutableArray *_fontFamilyStack;	// 28 = 0x1c
	NSMutableArray *_fontSizeStack;	// 32 = 0x20
	NSMutableArray *_linkStack;	// 36 = 0x24
	NSMutableArray *_backgroundColorStack;	// 40 = 0x28
	NSMutableArray *_foregroundColorStack;	// 44 = 0x2c
	NSMutableDictionary *_currentAttributes;	// 48 = 0x30
	BOOL _didAddBodyAttributes;	// 52 = 0x34
	int _baseWritingDirection;	// 56 = 0x38
	NSString *_backgroundColor;	// 60 = 0x3c
	NSString *_foregroundColor;	// 64 = 0x40
	NSMutableAttributedString *_body;	// 68 = 0x44
	NSMutableArray *_fileTransferGUIDs;	// 72 = 0x48
}
@property(retain, nonatomic) NSString *backgroundColor;	// G=0x32d54cf9; S=0x32d46589; @synthesize=_backgroundColor
@property(assign) int baseWritingDirection;	// G=0x32d54d19; S=0x32d54d2d; @synthesize=_baseWritingDirection
@property(readonly, assign, nonatomic) NSAttributedString *body;	// G=0x32d46899; 
@property(retain, nonatomic) NSArray *fileTransferGUIDs;	// G=0x32d46a4d; S=0x32d54ce9; @synthesize=_fileTransferGUIDs
@property(retain, nonatomic) NSString *foregroundColor;	// G=0x32d54d09; S=0x32d46599; @synthesize=_foregroundColor
- (void)_clearIvars;	// 0x32d46185
- (void)_incrementMessagePartNumber;	// 0x32d54a09
- (void)_initIvars;	// 0x32d4623d
- (void)_popValueFromStack:(id)stack attributeName:(id)name;	// 0x32d547d9
- (void)_pushValue:(id)value ontoStack:(id)stack attributeName:(id)name;	// 0x32d5478d
- (void)_updateFontFamily;	// 0x32d5437d
- (void)_updateFontSize;	// 0x32d54405
- (void)appendFileTransferWithGUID:(id)guid;	// 0x32d54a75
- (void)appendInlineImageWithGUID:(id)guid filename:(id)filename width:(int)width height:(int)height;	// 0x32d54a99
- (void)appendString:(id)string;	// 0x32d46721
// declared property getter: - (id)backgroundColor;	// 0x32d54cf9
// declared property getter: - (int)baseWritingDirection;	// 0x32d54d19
// declared property getter: - (id)body;	// 0x32d46899
- (void)dealloc;	// 0x32d46ab5
- (void)decrementBoldCount;	// 0x32d54501
- (void)decrementItalicCount;	// 0x32d545c1
- (void)decrementStrikethroughCount;	// 0x32d54741
- (void)decrementUnderlineCount;	// 0x32d54681
// declared property getter: - (id)fileTransferGUIDs;	// 0x32d46a4d
// declared property getter: - (id)foregroundColor;	// 0x32d54d09
- (void)incrementBoldCount;	// 0x32d5448d
- (void)incrementItalicCount;	// 0x32d5454d
- (void)incrementStrikethroughCount;	// 0x32d546cd
- (void)incrementUnderlineCount;	// 0x32d5460d
- (id)name;	// 0x32d54319
- (void)popBackgroundColor;	// 0x32d54971
- (void)popFontFamily;	// 0x32d54889
- (void)popFontSize;	// 0x32d46859
- (void)popForegroundColor;	// 0x32d549dd
- (void)popLink;	// 0x32d54905
- (void)pushBackgroundColor:(id)color;	// 0x32d54931
- (void)pushFontFamily:(id)family;	// 0x32d54849
- (void)pushFontSize:(id)size;	// 0x32d465a9
- (void)pushForegroundColor:(id)color;	// 0x32d5499d
- (void)pushLink:(id)link;	// 0x32d548c5
- (void)reset;	// 0x32d46131
- (id)resultsForLogging;	// 0x32d54325
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x32d46589
// declared property setter: - (void)setBaseWritingDirection:(int)direction;	// 0x32d54d2d
// declared property setter: - (void)setFileTransferGUIDs:(id)guids;	// 0x32d54ce9
// declared property setter: - (void)setForegroundColor:(id)color;	// 0x32d46599
@end

