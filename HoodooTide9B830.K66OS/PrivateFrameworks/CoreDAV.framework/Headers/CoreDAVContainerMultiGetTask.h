/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet, NSString;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask {
	NSSet *_urls;	// 132 = 0x84
	NSString *_appSpecificNamespace;	// 136 = 0x88
	NSString *_appSpecificMultiGetNameSpace;	// 140 = 0x8c
	NSString *_appSpecificMultiGetCommand;	// 144 = 0x90
	NSString *_appSpecificDataProp;	// 148 = 0x94
	Class _appSpecificDataItemClass;	// 152 = 0x98
	BOOL _shouldIgnoreResponseErrors;	// 156 = 0x9c
	NSSet *_additionalPropElements;	// 160 = 0xa0
	NSSet *_parsedContents;	// 164 = 0xa4
	NSSet *_missingURLs;	// 168 = 0xa8
}
@property(retain) NSSet *additionalPropElements;	// G=0x35db4fb5; S=0x35db4fc9; @synthesize=_additionalPropElements
@property(readonly, assign, nonatomic) NSSet *missingURLs;	// G=0x35db501d; @synthesize=_missingURLs
@property(readonly, assign) NSSet *parsedContents;	// G=0x35db500d; @synthesize=_parsedContents
@property(assign, nonatomic) BOOL shouldIgnoreResponseErrors;	// G=0x35db4fed; S=0x35db4ffd; @synthesize=_shouldIgnoreResponseErrors
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL appSpecificDataItemClass:(Class)aClass;	// 0x35db4361
// declared property getter: - (id)additionalPropElements;	// 0x35db4fb5
- (id)copyAdditionalPropElements;	// 0x35db44b5
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x35db48d9
- (void)dealloc;	// 0x35db44bd
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x35db4ad1
- (id)httpMethod;	// 0x35db4545
// declared property getter: - (id)missingURLs;	// 0x35db501d
// declared property getter: - (id)parsedContents;	// 0x35db500d
- (id)requestBody;	// 0x35db4551
// declared property setter: - (void)setAdditionalPropElements:(id)elements;	// 0x35db4fc9
- (void)setAdditionalProperties:(id)properties onDataItem:(id)item;	// 0x35db44b9
// declared property setter: - (void)setShouldIgnoreResponseErrors:(BOOL)ignoreResponseErrors;	// 0x35db4ffd
// declared property getter: - (BOOL)shouldIgnoreResponseErrors;	// 0x35db4fed
@end
