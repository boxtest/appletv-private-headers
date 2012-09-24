/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"

@class DOMRange, WebDataSource, NSString, NSDictionary, NSData, NSMutableAttributedString, NSMutableDictionary, NSURL, NSMutableArray, WebView, DOMDocument;

@interface NSHTMLReader : NSObject {
	NSMutableAttributedString *_attrStr;	// 4 = 0x4
	NSMutableDictionary *_documentAttrs;	// 8 = 0x8
	NSData *_data;	// 12 = 0xc
	NSURL *_baseURL;	// 16 = 0x10
	NSDictionary *_options;	// 20 = 0x14
	WebView *_webView;	// 24 = 0x18
	id _webDelegate;	// 28 = 0x1c
	DOMDocument *_document;	// 32 = 0x20
	DOMRange *_domRange;	// 36 = 0x24
	NSMutableArray *_domStartAncestors;	// 40 = 0x28
	WebDataSource *_dataSource;	// 44 = 0x2c
	NSString *_standardFontFamily;	// 48 = 0x30
	float _textSizeMultiplier;	// 52 = 0x34
	float _webViewTextSizeMultiplier;	// 56 = 0x38
	float _defaultTabInterval;	// 60 = 0x3c
	float _defaultFontSize;	// 64 = 0x40
	float _minimumFontSize;	// 68 = 0x44
	NSMutableArray *_textLists;	// 72 = 0x48
	NSMutableArray *_textBlocks;	// 76 = 0x4c
	NSMutableArray *_textTables;	// 80 = 0x50
	NSMutableDictionary *_textTableFooters;	// 84 = 0x54
	NSMutableArray *_textTableSpacings;	// 88 = 0x58
	NSMutableArray *_textTablePaddings;	// 92 = 0x5c
	NSMutableArray *_textTableRows;	// 96 = 0x60
	NSMutableArray *_textTableRowArrays;	// 100 = 0x64
	NSMutableArray *_textTableRowBackgroundColors;	// 104 = 0x68
	NSMutableDictionary *_computedStylesForElements;	// 108 = 0x6c
	NSMutableDictionary *_specifiedStylesForElements;	// 112 = 0x70
	NSMutableDictionary *_stringsForNodes;	// 116 = 0x74
	NSMutableDictionary *_floatsForNodes;	// 120 = 0x78
	NSMutableDictionary *_colorsForNodes;	// 124 = 0x7c
	NSMutableDictionary *_attributesForElements;	// 128 = 0x80
	NSMutableDictionary *_elementIsBlockLevel;	// 132 = 0x84
	NSMutableDictionary *_fontCache;	// 136 = 0x88
	NSMutableArray *_writingDirectionArray;	// 140 = 0x8c
	int _domRangeStartIndex;	// 144 = 0x90
	int _indexingLimit;	// 148 = 0x94
	int _thumbnailLimit;	// 152 = 0x98
	int _errorCode;	// 156 = 0x9c
	int _quoteLevel;	// 160 = 0xa0
	struct {
		unsigned isSoft : 1;
		unsigned reachedStart : 1;
		unsigned reachedEnd : 1;
		unsigned isIndexing : 1;
		unsigned isTesting : 1;
		unsigned hasTrailingNewline : 1;
		unsigned pad : 26;
	} _flags;	// 164 = 0xa4
}
+ (id)defaultParagraphStyle;	// 0x34695631
- (id)initWithDOMRange:(id)domrange;	// 0x346a1369
- (id)initWithData:(id)data options:(id)options;	// 0x346a0c81
- (id)initWithPath:(id)path options:(id)options;	// 0x346a1329
- (Class)_DOMHTMLTableCellElementClass;	// 0x34695445
- (Class)_WebMessageDocumentClass;	// 0x3469546d
- (BOOL)_addAttachmentForElement:(id)element URL:(id)url needsParagraph:(BOOL)paragraph usePlaceholder:(BOOL)placeholder;	// 0x34698e3d
- (void)_addMarkersToList:(id)list range:(NSRange)range;	// 0x3469bb91
- (void)_addQuoteForElement:(id)element opening:(BOOL)opening level:(int)level;	// 0x34699369
- (void)_addQuoteForLibXML2ElementNode:(xmlNode *)libXML2ElementNode opening:(BOOL)opening level:(int)level;	// 0x3469f085
- (void)_addTableCellForElement:(id)element;	// 0x3469aa11
- (void)_addTableForElement:(id)element;	// 0x3469a641
- (void)_addValue:(id)value forElement:(id)element;	// 0x346994ad
- (void)_adjustTrailingNewline;	// 0x3469da85
- (id)_attributesForElement:(id)element;	// 0x3469896d
- (id)_blockLevelElementForNode:(id)node;	// 0x34696ebd
- (id)_childrenForNode:(id)node;	// 0x346956c1
- (id)_colorForNode:(id)node property:(id)property;	// 0x34697169
- (id)_computedAttributesForElement:(id)element;	// 0x346972b9
- (id)_computedColorForNode:(id)node property:(id)property;	// 0x34696f41
- (id)_computedStringForNode:(id)node property:(id)property;	// 0x3469594d
- (id)_computedStyleForElement:(id)element;	// 0x34695739
- (id)_createWebArchiveForData:(id)data;	// 0x3469de31
- (BOOL)_elementHasOwnBackgroundColor:(id)color;	// 0x34696df9
- (BOOL)_elementIsBlockLevel:(id)level;	// 0x34696c85
- (BOOL)_enterElement:(id)element tag:(id)tag display:(id)display depth:(int)depth embedded:(BOOL)embedded;	// 0x3469a46d
- (BOOL)_enterLibXML2ElementNode:(xmlNode *)node tag:(id)tag;	// 0x3469f3f9
- (void)_exitElement:(id)element tag:(id)tag display:(id)display depth:(int)depth startIndex:(unsigned)index;	// 0x3469c0b1
- (void)_exitLibXML2ElementNode:(xmlNode *)node tag:(id)tag startIndex:(unsigned)index;	// 0x3469f981
- (void)_fillInBlock:(id)block forElement:(id)element backgroundColor:(id)color extraMargin:(float)margin extraPadding:(float)padding isTable:(BOOL)table;	// 0x34699581
- (BOOL)_getComputedFloat:(float *)aFloat forNode:(id)node property:(id)property;	// 0x346967d1
- (BOOL)_getFloat:(float *)aFloat forNode:(id)node property:(id)property;	// 0x34696aed
- (void)_load;	// 0x346a0835
- (void)_loadFromDOMRange;	// 0x3469eb7d
- (void)_loadUsingLibXML2;	// 0x346a0281
- (void)_loadUsingWebKit;	// 0x3469e011
- (void)_loadUsingWebKitOnMainThread;	// 0x346a07e9
- (void)_loadWebKit;	// 0x34695335
- (void)_newLineForElement:(id)element;	// 0x34698be5
- (void)_newLineForLibXML2ElementNode:(xmlNode *)libXML2ElementNode;	// 0x3469efc9
- (void)_newParagraphForElement:(id)element tag:(id)tag allowEmpty:(BOOL)empty suppressTrailingSpace:(BOOL)space;	// 0x346989f9
- (void)_newParagraphForLibXML2ElementNode:(xmlNode *)libXML2ElementNode tag:(id)tag allowEmpty:(BOOL)empty suppressTrailingSpace:(BOOL)space;	// 0x3469ee9d
- (void)_newTabForElement:(id)element;	// 0x34698d09
- (void)_parseLibXML2Node:(xmlNode *)node;	// 0x346a0251
- (void)_parseNode:(id)node;	// 0x3469da65
- (BOOL)_processElement:(id)element tag:(id)tag display:(id)display depth:(int)depth;	// 0x3469ae15
- (void)_processHeadElement:(id)element;	// 0x3469a335
- (BOOL)_processLibXML2ElementNode:(xmlNode *)node tag:(id)tag;	// 0x3469f8c5
- (void)_processLibXML2HeadElementNode:(xmlNode *)node;	// 0x3469f331
- (void)_processLibXML2MetaNode:(xmlNode *)node;	// 0x3469f235
- (void)_processLibXML2TextNode:(xmlNode *)node content:(id)content;	// 0x3469fe15
- (void)_processLibXML2TitleNode:(xmlNode *)node;	// 0x3469f165
- (void)_processMetaElementWithName:(id)name content:(id)content;	// 0x34699be9
- (void)_processText:(id)text;	// 0x3469ccb9
- (BOOL)_sanitizeWebArchiveArray:(id)array;	// 0x3469db2d
- (BOOL)_sanitizeWebArchiveDictionary:(id)dictionary;	// 0x3469dc81
- (id)_specifiedStyleForElement:(id)element;	// 0x34695891
- (id)_stringForNode:(id)node property:(id)property;	// 0x346966cd
- (void)_traverseFooterNode:(id)node depth:(int)depth;	// 0x3469d7b1
- (void)_traverseLibXML2Node:(xmlNode *)node depth:(int)depth;	// 0x346a00a5
- (void)_traverseNode:(id)node depth:(int)depth embedded:(BOOL)embedded;	// 0x3469d2a5
- (Class)_webArchiveClass;	// 0x346953e5
- (id)_webKitBundle;	// 0x346952cd
- (id)_webPreferences;	// 0x346954d5
- (Class)_webViewClass;	// 0x34695385
- (id)attributedString;	// 0x346a13b1
- (void)dealloc;	// 0x346a0a29
- (id)documentAttributes;	// 0x346a1411
- (void)setMutableAttributedString:(id)string;	// 0x346a1471
@end
