# Contributing

This document explains how to contribute to this project.
By contributing you will agree that your contribution will be put under the same license as this repository.

## Table of Contents

- [Communication](#communication)
- [Contributions](#contributions)
- [Developer Certificate of Origin](#developer-certificate-of-origin)
- [Quality](#quality)

## Communication

For communication please respect our [FOSS Code of Conduct](https://github.com/mercedes-benz/foss/blob/master/CODE_OF_CONDUCT.md).

The following communication channels exist for this project:

- Github for reporting and claiming issues: [GitHub Issues](https://github.com/mercedes-benz/roadC/issues)

Transparent and open communication is important to us.
Thus, all project-related communication should happen only through these channels and in English.
Issue-related communication should happen within the concerned issue.

## Contributions

If you would like to contribute code you can do so through GitHub by forking the repository and sending a pull request, following the standard [GitHub flow](https://docs.github.com/en/get-started/using-github/github-flow).

When submitting code, please make every effort to follow existing conventions and style in order to keep the code as readable as possible.

If you are new to contributing in Github, [First Contributions](https://github.com/firstcontributions/first-contributions) might be a good starting point.

## Developer Certificate of Origin

Contributors must agree to the "Developer Certificate of Origin Version 1.1" (DCO) and comply with the sign-off procedure for contributing to `roadC`.
All contributions submitted to the `roadC` repository have to carry a signed-off-by statement in the commit message using the following format:

    Signed-off-by: Firstname Lastname <email.address>

where the specified email address must match the commit author and must be associated with your [GitHub account](https://docs.github.com/en/account-and-profile/concepts/email-addresses).
By adding a signed-off-by statement to a commit message, you convey that you have the necessary rights to contribute the respective changes.

Git adds this line automatically when you commit with the `-s` (`--signoff`) option:

    git commit -s -m "Describe your change"

Every pull request is checked automatically by the [DCO app](https://github.com/apps/dco).
If a commit does not carry a valid signed-off-by statement, the check fails and the pull request cannot be merged into the official `roadC` repository.

If you forgot to sign off, you can amend your last commit with `git commit --amend --signoff`, or sign off all commits of your branch with `git rebase --signoff main`, and then force-push your branch.

### Developer Certificate of Origin (Text)

```text
Developer's Certificate of Origin 1.1

By making a contribution to this project, I certify that:

(a) The contribution was created in whole or in part by me and I have the right to submit it under the open source license indicated in the file; or

(b) The contribution is based upon previous work that, to the best of my knowledge, is covered under an appropriate open source license and I have the right under that license to submit that work with modifications, whether created in whole or in part by me, under the same open source license (unless I am permitted to submit under a different license), as indicated in the file; or

(c) The contribution was provided directly to me by some other person who certified (a), (b) or (c) and I have not modified it.

(d) I understand and agree that this project and the contribution are public and that a record of the contribution (including all personal information I submit with it, including my sign-off) is maintained indefinitely and may be redistributed consistent with this project or the open source license(s) involved.
```

The text of the DCO is also available at <https://developercertificate.org>.

## Quality

Please ensure that for all contributions, the corresponding documentation is in-sync and up-to-date. All documentation should be in English language.

We assume that for every non-trivial contribution, the project has been built and tested prior to the contribution.
