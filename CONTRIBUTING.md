# Contributing

Welcome to Kmesh!

- [Contributing](#contributing)
- [Before you get started](#before-you-get-started)
  - [Code of Conduct](#code-of-conduct)
  - [Community Expectations](#community-expectations)
- [Getting started](#getting-started)
- [Your First Contribution](#your-first-contribution)
  - [Find something to work on](#find-something-to-work-on)
    - [Find a good first topic](#find-a-good-first-topic)
      - [Work on an issue](#work-on-an-issue)
    - [File an Issue](#file-an-issue)
- [Contributor Workflow](#contributor-workflow)
  - [Creating Pull Requests](#creating-pull-requests)
  - [Code Review](#code-review)
- [Membership](#membership)

## Before you get started

### Code of Conduct

Please make sure to read and observe our [Code of Conduct](/CODE_OF_CONDUCT.md).

### Community Expectations

Kmesh is a community project driven by its community which strives to promote a healthy, friendly and productive environment.
Kmesh aims to provide turnkey automation for multi-cluster application management in multi-cloud and hybrid cloud scenarios,
and intended to realize multi-cloud centralized management, high availability, failure recovery and traffic scheduling.

## Getting started

- Fork the repository on GitHub.
- Make your changes on your fork repository.
- Submit a PR.

## Your First Contribution

We will help you to contribute in different areas like filing issues, developing features, fixing critical bugs and
getting your work reviewed and merged.

If you have questions about the development process,
feel free to [file an issue](https://github.com/Kmesh-net/Kmesh/issues/new/choose).

### Find something to work on

We are always in need of help, be it fixing documentation, reporting bugs or writing some code.
Look at places where you feel best coding practices aren't followed, code refactoring is needed or tests are missing.
Here is how you get started.

#### Find a good first topic

There are [multiple repositories](https://github.com/Kmesh-net/) within the Kmesh organization.
Each repository has beginner-friendly issues that provide a good first issue.
For example, [Kmesh-net/Kmesh](https://github.com/Kmesh-net/Kmesh) has
[help wanted](https://github.com/Kmesh-net/Kmesh/issues?q=is%3Aopen+is%3Aissue+label%3A%22help+wanted%22) and
[good first issue](https://github.com/Kmesh-net/Kmesh/issues?q=is%3Aopen+is%3Aissue+label%3A%22good+first+issue%22)
labels for issues that should not need deep knowledge of the system.
We can help new contributors who wish to work on such issues.

Another good way to contribute is to find a documentation improvement, such as a missing/broken link.
Please see [Contributing](#contributing) below for the workflow.

#### Work on an issue

When you are willing to take on an issue, just reply on the issue. The maintainer will assign it to you.

#### File an Issue

While we encourage everyone to contribute code, it is also appreciated when someone reports an issue.
Issues should be filed under the appropriate Kmesh sub-repository.

*Example:* a Kmesh issue should be opened to [Kmesh-net/Kmesh](https://github.com/Kmesh-net/Kmesh/issues).

Please follow the prompted submission guidelines while opening an issue.

## Contributor Workflow

Please do not ever hesitate to ask a question or send a pull request.

This is a rough outline of what a contributor's workflow looks like:

- Create a topic branch from where to base the contribution. This is usually master.
- Make commits of logical units.
- Push changes in a topic branch to a personal fork of the repository.
- Submit a pull request to [Kmesh-net/Kmesh](https://github.com/Kmesh-net/Kmesh).

### Creating Pull Requests

Pull requests are often called simply "PR".
Kmesh generally follows the standard [github pull request](https://help.github.com/articles/about-pull-requests/) process.
To submit a proposed change, please develop the code/fix and add new test cases.
After that, run these local verifications before submitting pull request to predict the pass or
fail of continuous integration.

- Run and pass `make gen-check`, if want to run with sudo privileges `sudo env PATH=$PATH make gen-check`
- To compile, refer to [Compile and Build Kmesh](https://kmesh.net/en/docs/developer/build-guide/)
- To run unit test, refer to [Run Unit Test](https://kmesh.net/en/docs/developer/run-ut/)
- To run e2e test, refer to [Run E2E Test](https://kmesh.net/en/docs/developer/e2e-guide/)

### Code Review

To make it easier for your PR to receive reviews, consider the reviewers will need you to:

- follow [good coding guidelines](https://github.com/golang/go/wiki/CodeReviewComments).
- write [good commit messages](https://chris.beams.io/posts/git-commit/).
- break large changes into a logical series of smaller patches which individually make easily understandable changes, and in aggregate solve a broader issue.

## Membership

We encourage all contributors to become members. Learn more about requirements and responsibilities of membership in our [Community Membership doc](https://kmesh.net/docs/community/membership/).

If you have made contributions that meet the requirements of becoming KMesh member, simply file an [issue](https://github.com/kmesh-net/kmesh/issues/new?assignees=&labels=&projects=&template=membership-request.md&title=REQUEST%3A+New+membership+for+%3Cyour+name%3E) to apply.

Kmesh community welcomes all interested developers to become members of the Kmesh community!
