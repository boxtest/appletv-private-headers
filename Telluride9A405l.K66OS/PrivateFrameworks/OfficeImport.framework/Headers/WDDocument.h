/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"

@class NSMutableArray, WDListTable, OADBackground, WDFontTable, WDRevisionAuthorTable, WDText, NSDate, OADTheme, WDListDefinitionTable, WDStyleSheet, NSString;

__attribute__((visibility("hidden")))
@interface WDDocument : OCDDocument {
@private
	WDStyleSheet *mStyleSheet;	// 20 = 0x14
	WDFontTable *mFontTable;	// 24 = 0x18
	WDListDefinitionTable *mListDefinitionTable;	// 28 = 0x1c
	WDRevisionAuthorTable *mRevisionAuthorTable;	// 32 = 0x20
	WDListTable *mListTable;	// 36 = 0x24
	NSMutableArray *mSections;	// 40 = 0x28
	unsigned short mDefaultTabWidth;	// 44 = 0x2c
	WDText *mImageBulletText;	// 48 = 0x30
	WDText *mFootnoteSeparator;	// 52 = 0x34
	WDText *mFootnoteContinuationSeparator;	// 56 = 0x38
	WDText *mFootnoteContinuationNotice;	// 60 = 0x3c
	WDText *mEndnoteSeparator;	// 64 = 0x40
	WDText *mEndnoteContinuationSeparator;	// 68 = 0x44
	WDText *mEndnoteContinuationNotice;	// 72 = 0x48
	int mFootnoteNumberFormat;	// 76 = 0x4c
	int mEndnoteNumberFormat;	// 80 = 0x50
	int mFootnotePosition;	// 84 = 0x54
	int mEndnotePosition;	// 88 = 0x58
	int mFootnoteRestart;	// 92 = 0x5c
	int mEndnoteRestart;	// 96 = 0x60
	unsigned short mFootnoteNumberingStart;	// 100 = 0x64
	int mGutterPosition;	// 104 = 0x68
	NSString *mOleFilename;	// 108 = 0x6c
	short mZoomPercentage;	// 112 = 0x70
	NSString *mVersion;	// 116 = 0x74
	unsigned mMirrorMargins : 1;	// 120 = 0x78
	unsigned mBorderSurroundHeader : 1;	// 120 = 0x78
	unsigned mBorderSurroundFooter : 1;	// 120 = 0x78
	unsigned mAutoHyphenate : 1;	// 120 = 0x78
	unsigned mEvenAndOddHeaders : 1;	// 120 = 0x78
	unsigned mGraphicsInHeaderFooter : 1;	// 120 = 0x78
	unsigned mBookFold : 1;	// 120 = 0x78
	unsigned mShowMarkup : 1;	// 120 = 0x78
	unsigned mShowComments : 1;	// 121 = 0x79
	unsigned mTrackChanges : 1;	// 121 = 0x79
	unsigned mShowRevisionMarksOnScreen : 1;	// 121 = 0x79
	unsigned mShowInsertionsAndDeletions : 1;	// 121 = 0x79
	unsigned mShowFormatting : 1;	// 121 = 0x79
	unsigned mShowOutline : 1;	// 121 = 0x79
	NSMutableArray *mDocumentImages;	// 124 = 0x7c
	NSMutableArray *mChangeTrackingEditDates;	// 128 = 0x80
	NSMutableArray *mChangeTrackingEditAuthors;	// 132 = 0x84
	NSDate *mCreationDate;	// 136 = 0x88
	NSMutableArray *mImageBullets;	// 140 = 0x8c
	int mZIndexTotalForMainText;	// 144 = 0x90
	int mZIndexTotalForHeaderFooterText;	// 148 = 0x94
	OADBackground *mDocumentBackground;	// 152 = 0x98
	OADTheme *mTheme;	// 156 = 0x9c
}
@property(assign) BOOL autoHyphenate;	// G=0x30e6deb1; S=0x30d0627d; converted property
@property(assign) BOOL bookFold;	// G=0x30e6df69; S=0x30d0633d; converted property
@property(assign) BOOL borderSurroundFooter;	// G=0x30e6de59; S=0x30d0624d; converted property
@property(assign) BOOL borderSurroundHeader;	// G=0x30e6de3d; S=0x30d0622d; converted property
@property(retain) id creationDate;	// G=0x30e6e08d; S=0x30e6e615; converted property
@property(assign) unsigned short defaultTabWidth;	// G=0x30c82c1d; S=0x30d0626d; converted property
@property(retain) id documentBackground;	// G=0x30e6e0ad; S=0x30d1b6ad; converted property
@property(assign) int endnoteNumberFormat;	// G=0x30e6def9; S=0x30d062ed; converted property
@property(assign) int endnotePosition;	// G=0x30e6df19; S=0x30d062cd; converted property
@property(assign) int endnoteRestart;	// G=0x30e6df39; S=0x30d0630d; converted property
@property(assign) BOOL evenAndOddHeaders;	// G=0x30e6decd; S=0x30d0629d; converted property
@property(assign) int footnoteNumberFormat;	// G=0x30e6dee9; S=0x30d062dd; converted property
@property(assign) unsigned short footnoteNumberingStart;	// G=0x30e6df49; S=0x30d0631d; converted property
@property(assign) int footnotePosition;	// G=0x30e6df09; S=0x30d062bd; converted property
@property(assign) int footnoteRestart;	// G=0x30e6df29; S=0x30d062fd; converted property
@property(assign) BOOL graphicsInHeaderFooter;	// G=0x30e6de75; S=0x30e6de91; converted property
@property(assign) int gutterPosition;	// G=0x30e6df59; S=0x30d0632d; converted property
@property(assign) BOOL mirrorMargins;	// G=0x30e6de21; S=0x30d06211; converted property
@property(retain) id oleFilename;	// G=0x30da4b8d; S=0x30d06519; converted property
@property(assign) BOOL showComments;	// G=0x30e6dfc5; S=0x30d061f5; converted property
@property(assign) BOOL showFormatting;	// G=0x30e6e035; S=0x30d061b9; converted property
@property(assign) BOOL showInsertionsAndDeletions;	// G=0x30e6e019; S=0x30d06199; converted property
@property(assign) BOOL showMarkup;	// G=0x30e6dfb1; S=0x30d061d9; converted property
@property(assign) BOOL showOutline;	// G=0x30e6e051; S=0x30d0636d; converted property
@property(assign) BOOL showRevisionMarksOnScreen;	// G=0x30e6dffd; S=0x30d06179; converted property
@property(assign) BOOL trackChanges;	// G=0x30e6dfe1; S=0x30d06159; converted property
@property(retain) id version;	// G=0x30e6dfa1; S=0x30e6e6e1; converted property
@property(assign) int zIndexTotalForHeaderFooterText;	// G=0x30e6e0cd; S=0x30d1b7d9; converted property
@property(assign) int zIndexTotalForMainText;	// G=0x30e6e0bd; S=0x30d1b7b9; converted property
@property(assign) short zoomPercentage;	// G=0x30e6df85; S=0x30d0635d; converted property
+ (int)thumbnailCutOff;	// 0x30e6de19
- (id)init;	// 0x30cfd98d
- (void)addChangeTrackingEditAtDate:(id)date authorIndex:(int)index;	// 0x30d9f789
- (id)addImageBulletText;	// 0x30d3c249
- (void)addImageBullets;	// 0x30e6e721
- (id)addList:(id)list;	// 0x30e6e84d
- (id)addListDefinition;	// 0x30e6e8b5
- (void)addRevisionAuthor:(id)author;	// 0x30e6e655
- (id)addSection;	// 0x30d12071
- (id)annotationBlockIterator;	// 0x30e6e151
- (id)annotationIterator;	// 0x30e6e2dd
- (id)applicationName;	// 0x30e6df95
// converted property getter: - (BOOL)autoHyphenate;	// 0x30e6deb1
// converted property getter: - (BOOL)bookFold;	// 0x30e6df69
// converted property getter: - (BOOL)borderSurroundFooter;	// 0x30e6de59
// converted property getter: - (BOOL)borderSurroundHeader;	// 0x30e6de3d
- (id)changeTrackingEditAuthors;	// 0x30e6e07d
- (id)changeTrackingEditDates;	// 0x30e6e06d
// converted property getter: - (id)creationDate;	// 0x30e6e08d
- (void)dealloc;	// 0x30c8410d
// converted property getter: - (unsigned short)defaultTabWidth;	// 0x30c82c1d
// converted property getter: - (id)documentBackground;	// 0x30e6e0ad
- (id)endnoteBlockIterator;	// 0x30e6e1d5
- (id)endnoteContinuationNotice;	// 0x30d17385
- (id)endnoteContinuationSeparator;	// 0x30d17375
- (id)endnoteIterator;	// 0x30e6e361
// converted property getter: - (int)endnoteNumberFormat;	// 0x30e6def9
// converted property getter: - (int)endnotePosition;	// 0x30e6df19
// converted property getter: - (int)endnoteRestart;	// 0x30e6df39
- (id)endnoteSeparator;	// 0x30d17365
// converted property getter: - (BOOL)evenAndOddHeaders;	// 0x30e6decd
- (id)fontTable;	// 0x30cfe8bd
- (id)footnoteBlockIterator;	// 0x30e6e259
- (id)footnoteContinuationNotice;	// 0x30d17355
- (id)footnoteContinuationSeparator;	// 0x30d17345
- (id)footnoteIterator;	// 0x30e6e3e5
// converted property getter: - (int)footnoteNumberFormat;	// 0x30e6dee9
// converted property getter: - (unsigned short)footnoteNumberingStart;	// 0x30e6df49
// converted property getter: - (int)footnotePosition;	// 0x30e6df09
// converted property getter: - (int)footnoteRestart;	// 0x30e6df29
- (id)footnoteSeparator;	// 0x30d17221
// converted property getter: - (BOOL)graphicsInHeaderFooter;	// 0x30e6de75
// converted property getter: - (int)gutterPosition;	// 0x30e6df59
- (id)imageBulletParagraph;	// 0x30ddf7a5
- (id)imageBulletText;	// 0x30e6e09d
- (id)imageBulletWithCharacterOffset:(int)characterOffset;	// 0x30d3c405
- (id)imageBullets;	// 0x30d0fae5
- (BOOL)isFromBinary;	// 0x30e6e0dd
- (id)lastSection;	// 0x30d78c85
- (id)listAt:(int)at;	// 0x30e6e871
- (int)listCount;	// 0x30e6e895
- (id)listDefinitionAt:(int)at;	// 0x30e6e8d5
- (int)listDefinitionCount;	// 0x30e6e8f9
- (id)listDefinitionTable;	// 0x30d0faf5
- (id)listDefinitionWithId:(int)anId;	// 0x30d723e1
- (id)listTable;	// 0x30c82e31
- (id)mainBlocksIterator;	// 0x30e6e4ed
- (id)mainRunsIterator;	// 0x30e6e469
// converted property getter: - (BOOL)mirrorMargins;	// 0x30e6de21
- (id)newAnnotationBlockIterator;	// 0x30e6e0f5
- (id)newAnnotationIterator;	// 0x30e6e281
- (id)newEndnoteBlockIterator;	// 0x30e6e179
- (id)newEndnoteIterator;	// 0x30e6e305
- (id)newFootnoteBlockIterator;	// 0x30e6e1fd
- (id)newFootnoteIterator;	// 0x30e6e389
- (id)newMainBlocksIterator;	// 0x30e6e491
- (id)newMainRunsIterator;	// 0x30e6e40d
- (id)newSectionIterator;	// 0x30e6e515
// converted property getter: - (id)oleFilename;	// 0x30da4b8d
- (void)removeEmptySections;	// 0x30e6e581
- (int)revisionAuthorAddLookup:(id)lookup;	// 0x30e6e679
- (id)revisionAuthorAt:(int)at;	// 0x30e6e69d
- (int)revisionAuthorCount;	// 0x30e6e6c1
- (id)revisionAuthorTable;	// 0x30d10795
- (id)sectionAt:(int)at;	// 0x30c81589
- (int)sectionCount;	// 0x30d17f05
- (id)sectionIterator;	// 0x30e6e559
- (id)sections;	// 0x30d1800d
// converted property setter: - (void)setAutoHyphenate:(BOOL)hyphenate;	// 0x30d0627d
// converted property setter: - (void)setBookFold:(BOOL)fold;	// 0x30d0633d
// converted property setter: - (void)setBorderSurroundFooter:(BOOL)footer;	// 0x30d0624d
// converted property setter: - (void)setBorderSurroundHeader:(BOOL)header;	// 0x30d0622d
// converted property setter: - (void)setCreationDate:(id)date;	// 0x30e6e615
// converted property setter: - (void)setDefaultTabWidth:(unsigned short)width;	// 0x30d0626d
// converted property setter: - (void)setDocumentBackground:(id)background;	// 0x30d1b6ad
// converted property setter: - (void)setEndnoteNumberFormat:(int)format;	// 0x30d062ed
// converted property setter: - (void)setEndnotePosition:(int)position;	// 0x30d062cd
// converted property setter: - (void)setEndnoteRestart:(int)restart;	// 0x30d0630d
// converted property setter: - (void)setEvenAndOddHeaders:(BOOL)headers;	// 0x30d0629d
// converted property setter: - (void)setFootnoteNumberFormat:(int)format;	// 0x30d062dd
// converted property setter: - (void)setFootnoteNumberingStart:(unsigned short)start;	// 0x30d0631d
// converted property setter: - (void)setFootnotePosition:(int)position;	// 0x30d062bd
// converted property setter: - (void)setFootnoteRestart:(int)restart;	// 0x30d062fd
// converted property setter: - (void)setGraphicsInHeaderFooter:(BOOL)headerFooter;	// 0x30e6de91
// converted property setter: - (void)setGutterPosition:(int)position;	// 0x30d0632d
// converted property setter: - (void)setMirrorMargins:(BOOL)margins;	// 0x30d06211
// converted property setter: - (void)setOleFilename:(id)filename;	// 0x30d06519
// converted property setter: - (void)setShowComments:(BOOL)comments;	// 0x30d061f5
// converted property setter: - (void)setShowFormatting:(BOOL)formatting;	// 0x30d061b9
// converted property setter: - (void)setShowInsertionsAndDeletions:(BOOL)deletions;	// 0x30d06199
// converted property setter: - (void)setShowMarkup:(BOOL)markup;	// 0x30d061d9
// converted property setter: - (void)setShowOutline:(BOOL)outline;	// 0x30d0636d
// converted property setter: - (void)setShowRevisionMarksOnScreen:(BOOL)screen;	// 0x30d06179
// converted property setter: - (void)setTrackChanges:(BOOL)changes;	// 0x30d06159
// converted property setter: - (void)setVersion:(id)version;	// 0x30e6e6e1
// converted property setter: - (void)setZIndexTotalForHeaderFooterText:(int)headerFooterText;	// 0x30d1b7d9
// converted property setter: - (void)setZIndexTotalForMainText:(int)mainText;	// 0x30d1b7b9
// converted property setter: - (void)setZoomPercentage:(short)percentage;	// 0x30d0635d
// converted property getter: - (BOOL)showComments;	// 0x30e6dfc5
// converted property getter: - (BOOL)showFormatting;	// 0x30e6e035
// converted property getter: - (BOOL)showInsertionsAndDeletions;	// 0x30e6e019
// converted property getter: - (BOOL)showMarkup;	// 0x30e6dfb1
// converted property getter: - (BOOL)showOutline;	// 0x30e6e051
// converted property getter: - (BOOL)showRevisionMarksOnScreen;	// 0x30e6dffd
- (id)styleSheet;	// 0x30d06ce9
- (id)theme;	// 0x30d18d01
// converted property getter: - (BOOL)trackChanges;	// 0x30e6dfe1
// converted property getter: - (id)version;	// 0x30e6dfa1
// converted property getter: - (int)zIndexTotalForHeaderFooterText;	// 0x30e6e0cd
// converted property getter: - (int)zIndexTotalForMainText;	// 0x30e6e0bd
// converted property getter: - (short)zoomPercentage;	// 0x30e6df85
@end

