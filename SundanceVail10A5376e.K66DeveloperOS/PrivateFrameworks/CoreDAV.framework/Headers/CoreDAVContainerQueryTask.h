/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet, NSString;
@protocol CoreDAVContainerQueryTaskDelegate;

@interface CoreDAVContainerQueryTask : CoreDAVTask {
	NSSet *_searchTerms;	// 136 = 0x88
	unsigned _searchLimit;	// 140 = 0x8c
	NSString *_appSpecificNamespace;	// 144 = 0x90
	NSString *_appSpecificQueryCommand;	// 148 = 0x94
	NSString *_appSpecificDataProp;	// 152 = 0x98
	Class _appSpecificDataItemClass;	// 156 = 0x9c
}
@property(assign, nonatomic) id<CoreDAVContainerQueryTaskDelegate> delegate;	// @dynamic
+ (id)_copySearchTermsFromSearchString:(id)searchString;	// 0x33a37ecd
- (id)initWithSearchString:(id)searchString searchLimit:(unsigned)limit atURL:(id)url appSpecificDataItemClass:(Class)aClass;	// 0x33a381f9
- (id)initWithSearchTerms:(id)searchTerms searchLimit:(unsigned)limit atURL:(id)url appSpecificDataItemClass:(Class)aClass;	// 0x33a381f5
- (id)_initWithSearchTerms:(id)searchTerms searchLimit:(unsigned)limit atURL:(id)url appSpecificDataItemClass:(Class)aClass;	// 0x33a38259
- (void)addFiltersToXMLData:(id)xmldata;	// 0x33a38375
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x33a38519
- (void)dealloc;	// 0x33a3831d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33a386f5
- (id)httpMethod;	// 0x33a38369
- (id)requestBody;	// 0x33a383b9
@end
