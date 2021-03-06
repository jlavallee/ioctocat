#import <UIKit/UIKit.h>


@interface DiffController : UIViewController <UIWebViewDelegate> {
	NSArray *files;
	NSUInteger index;
	UIWebView *contentView;
}

@property(nonatomic,retain)NSArray *files;
@property(nonatomic,assign)NSUInteger index;
@property(nonatomic,retain)IBOutlet UIWebView *contentView;

- (id)initWithFiles:(NSArray *)theFiles currentIndex:(NSUInteger)theCurrentIndex;

@end
